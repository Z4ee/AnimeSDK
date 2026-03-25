#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER_CALCULATEINNERPOINTS_OFFSET UNITYSDK_OFFSET(0x9E031A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x9E02C70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x9E02E10)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9E02C80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER__BUILDBORDER_OFFSET UNITYSDK_OFFSET(0x9E039B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E04370)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER__GENERATEBORDERGEOMETRY_OFFSET UNITYSDK_OFFSET(0x9E02E80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x9E044A0)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int SectionBorder_TypeDefinitionIndex = 61405;

	class SectionBorder : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* _Corners; // 0xF0
		::UnityEngine::Vector2 _BorderWidth; // 0xF8
		::UnityEngine::Vector2 _SpaceWidth; // 0x100
		::UnityEngine::Color _LockedBorderColor; // 0x108
		::UnityEngine::Color _LockedSpaceColor; // 0x118
		::UnityEngine::Color _UnlockedBorderColor; // 0x128
		::UnityEngine::Color _UnlockedSpaceColor; // 0x138
		::System::Single _AntiAliasing; // 0x148
		::System::Boolean _IsUnlocked; // 0x14C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER_GET_DEFAULTMATERIAL_OFFSET))(this);
		}

		::System::Void SetupView(::Il2CppArray<::RPG::MVector2>* vertices, ::Il2CppArray<::System::UInt32>* indices, ::System::Boolean unlocked)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER_SETUPVIEW_OFFSET))(this, vertices, indices, unlocked);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Void _GenerateBorderGeometry(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER__GENERATEBORDERGEOMETRY_OFFSET))(this, vh);
		}

		::System::Void _BuildBorder(::UnityEngine::UI::VertexHelper* vh, ::Il2CppArray<::UnityEngine::Vector2>* outer, ::Il2CppArray<::UnityEngine::Vector2>* inner, ::UnityEngine::Color outerColor, ::UnityEngine::Color innerColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER__BUILDBORDER_OFFSET))(this, vh, outer, inner, outerColor, innerColor);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* CalculateInnerPoints(::Il2CppArray<::UnityEngine::Vector2>* outer, ::UnityEngine::Vector2 width)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER_CALCULATEINNERPOINTS_OFFSET))(outer, width);
		}

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONBORDER___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, P0);
		}
	};
}
