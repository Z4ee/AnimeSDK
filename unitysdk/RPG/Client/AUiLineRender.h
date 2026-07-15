#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_AUILINERENDER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x17470550)
#define RPG_CLIENT_AUILINERENDER_METHOD_7_1E2ADA6EB660284B_OFFSET UNITYSDK_OFFSET(0x174711C0)
#define RPG_CLIENT_AUILINERENDER_METHOD_7_EE31827DE295EEA2_OFFSET UNITYSDK_OFFSET(0x17470800)
#define RPG_CLIENT_AUILINERENDER_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x174705A0)
#define RPG_CLIENT_AUILINERENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x174712C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AUiLineRender_TypeDefinitionIndex = 69220;

	class AUiLineRender : public ::UnityEngine::UI::Graphic
	{
	public:
		::UnityEngine::Sprite* Sprite; // 0xA0
		::UnityEngine::Texture* Texture; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Points; // 0xB0
		::System::Single Field_7_3; // 0xB8
		::System::Single Field_7_4; // 0xBC
		::UnityEngine::Vector2 Field_7_5; // 0xC0
		::System::Single Thickness; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINERENDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINERENDER_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINERENDER_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void Method_7_EE31827DE295EEA2(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Int32 a3, ::UnityEngine::UI::VertexHelper* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINERENDER_METHOD_7_EE31827DE295EEA2_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 Method_7_1E2ADA6EB660284B(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINERENDER_METHOD_7_1E2ADA6EB660284B_OFFSET))(this, a1, a2, a3);
		}
	};
}
