#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIQuad_VertexAttribute.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_UIQUAD_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0xA72A230)
#define RPG_CLIENT_UIQUAD_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA72B030)
#define RPG_CLIENT_UIQUAD_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xA72A2F0)
#define RPG_CLIENT_UIQUAD_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0xA72B1C0)
#define RPG_CLIENT_UIQUAD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA72B5E0)
#define RPG_CLIENT_UIQUAD__CTOR_OFFSET UNITYSDK_OFFSET(0xA72B340)
#define RPG_CLIENT_UIQUAD___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA72B640)
#define RPG_CLIENT_UIQUAD___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xA72B630)

namespace RPG::Client
{
	inline static constexpr unsigned int UIQuad_TypeDefinitionIndex = 59583;

	class UIQuad : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_UINormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIQuad_TypeDefinitionIndex)->GetStaticField(0x10EA0);
		}
		static ::UnityEngine::Vector4* StaticGet_UITangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UIQuad_TypeDefinitionIndex)->GetStaticField(0x10EAC);
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

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single rate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD_SETPROGRESS_OFFSET))(this, rate);
		}

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::UnityEngine::Texture* __iFixBaseProxy_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIQUAD___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET))(this);
		}
	};
}
