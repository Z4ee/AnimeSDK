#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1FB7BDE0)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FB7BED0)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1FB7C030)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1FB7C2B0)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1FB7BDF0)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1FB7C040)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_START_OFFSET UNITYSDK_OFFSET(0x1FB7C1D0)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7D280)

namespace MoleMole::LevelGenerator::Test
{
	inline static constexpr unsigned int MonoDrawSquald_TypeDefinitionIndex = 94983;

	class MonoDrawSquald : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Texture* m_Texture; // 0xF8
		::System::Single fillAmount; // 0x100
		::System::Boolean fill; // 0x104
		::System::Int32 thickness; // 0x108
		::System::Int32 segments; // 0x10C
		::Il2CppArray<::UnityEngine::UIVertex>* Field_8_4; // 0x110
		::Il2CppArray<::UnityEngine::Vector2>* Field_8_11; // 0x118
		::Il2CppArray<::UnityEngine::Vector2>* Field_8_10; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD__CTOR_OFFSET))(this);
		}

		::System::Single get_FillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_FillAmount(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_SET_FILLAMOUNT_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_texture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_SET_TEXTURE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_START_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_ONPOPULATEMESH_OFFSET))(this, a1);
		}
	};
}
