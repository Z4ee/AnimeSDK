#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIQuad_VertexAttribute.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_UIQUAD_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0xE3E89D0)
#define RPG_CLIENT_UIQUAD_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xE3E9700)
#define RPG_CLIENT_UIQUAD_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xE3E8AA0)
#define RPG_CLIENT_UIQUAD_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0xE3E99B0)
#define RPG_CLIENT_UIQUAD__CCTOR_OFFSET UNITYSDK_OFFSET(0xE3E9D90)
#define RPG_CLIENT_UIQUAD__CTOR_OFFSET UNITYSDK_OFFSET(0xE3E9B30)

namespace RPG::Client
{
	inline static constexpr unsigned int UIQuad_TypeDefinitionIndex = 72708;

	class UIQuad : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_UINormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIQuad_TypeDefinitionIndex)->GetStaticField(0x8100);
		}
		static ::UnityEngine::Vector4* StaticGet_UITangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UIQuad_TypeDefinitionIndex)->GetStaticField(0x810C);
		}
		::UnityEngine::Sprite* sprite; // 0xF0
		::System::Single StartValue; // 0xF8
		::System::Single EndValue; // 0xFC
		::System::Single antiAliasing; // 0x100
		::RPG::Client::UIQuad_VertexAttribute anchorAttribute; // 0x104
		::Il2CppArray<::RPG::Client::UIQuad_VertexAttribute>* vertexArray; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD__CCTOR_OFFSET))();
		}

		::System::Void ForceMeshUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD_FORCEMESHUPDATE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD_SETPROGRESS_OFFSET))(this, a1);
		}
	};
}
