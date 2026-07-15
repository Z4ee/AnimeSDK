#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIPolygon_VertexAttribute.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class UILineRenderer; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_UIPOLYGON_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0x18300770)
#define RPG_CLIENT_UIPOLYGON_GETPOLYGONRECT_OFFSET UNITYSDK_OFFSET(0x18300E90)
#define RPG_CLIENT_UIPOLYGON_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x183010A0)
#define RPG_CLIENT_UIPOLYGON_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x18300840)
#define RPG_CLIENT_UIPOLYGON_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x18301350)
#define RPG_CLIENT_UIPOLYGON__CCTOR_OFFSET UNITYSDK_OFFSET(0x183016E0)
#define RPG_CLIENT_UIPOLYGON__CTOR_OFFSET UNITYSDK_OFFSET(0x183014D0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPolygon_TypeDefinitionIndex = 69405;

	class UIPolygon : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_UINormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIPolygon_TypeDefinitionIndex)->GetStaticField(0x7FD0);
		}
		static ::UnityEngine::Vector4* StaticGet_UITangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UIPolygon_TypeDefinitionIndex)->GetStaticField(0x7FDC);
		}
		::UnityEngine::Sprite* sprite; // 0xF0
		::System::Single StartValue; // 0xF8
		::System::Single EndValue; // 0xFC
		::System::Single antiAliasing; // 0x100
		::RPG::Client::UILineRenderer* lineRenderer; // 0x108
		::Il2CppArray<::RPG::Client::UIPolygon_VertexAttribute>* vertexArray; // 0x110
		::UnityEngine::Vector4 projectorOffset; // 0x118
		::Il2CppArray<::RPG::Client::UIPolygon_VertexAttribute>* projectorArray; // 0x128
		::System::Single xmin; // 0x130
		::System::Single xmax; // 0x134
		::System::Single ymin; // 0x138
		::System::Single ymax; // 0x13C
		::System::Single width; // 0x140
		::System::Single height; // 0x144

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOLYGON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOLYGON__CCTOR_OFFSET))();
		}

		::System::Void ForceMeshUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOLYGON_FORCEMESHUPDATE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOLYGON_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void GetPolygonRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOLYGON_GETPOLYGONRECT_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOLYGON_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPOLYGON_SETPROGRESS_OFFSET))(this, a1);
		}
	};
}
