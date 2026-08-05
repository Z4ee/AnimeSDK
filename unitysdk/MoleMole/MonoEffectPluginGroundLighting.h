#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LineLightingV2_LineLightingV2Param.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginGroundLighting_LineFloatRange.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginGroundLighting_BoneListConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETCURVEWIDTH_OFFSET UNITYSDK_OFFSET(0x11D4BC10)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETDURATION_OFFSET UNITYSDK_OFFSET(0x11D4B9A0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETENDPOINT_OFFSET UNITYSDK_OFFSET(0x11D4AE90)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETLINELIGHTINGV2PARAM_OFFSET UNITYSDK_OFFSET(0x11D4B3A0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x11D4B130)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDELAYDURATION_OFFSET UNITYSDK_OFFSET(0x11D4BB40)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDURATION_OFFSET UNITYSDK_OFFSET(0x11D4BA70)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_METHOD_6_7A4445839B75D76B_OFFSET UNITYSDK_OFFSET(0x11D4B0B0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x11D4BCF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginGroundLighting_TypeDefinitionIndex = 83284;

	class MonoEffectPluginGroundLighting : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* Template; // 0x18
		::System::Int32 Count; // 0x20
		::System::Single RepickLength; // 0x24
		::System::String* EndPointEffect; // 0x28
		::System::Single EndPointEffectDuration; // 0x30
		::System::Single duration; // 0x34
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange durationRange; // 0x38
		::System::Single updateEndDuration; // 0x44
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange updateEndDurationRange; // 0x48
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange updateEndDelayRange; // 0x54
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange curveWidthRange; // 0x60
		::System::Single EndPointEffectOffsetY; // 0x6C
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange StartPointOffsetX; // 0x70
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange StartPointOffsetY; // 0x7C
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange StartPointOffsetZ; // 0x88
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange EndGroundPointOffsetX; // 0x94
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange EndGroundPointOffsetZ; // 0xA0
		::System::Boolean UseBonePoint; // 0xAC
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginGroundLighting_BoneListConfig*>* BoneListConfigs; // 0xB0
		::System::Boolean UseEntityEndPoint; // 0xB8
		::System::String* EntityEndPointAttachPointName; // 0xC0
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange altRotationRange; // 0xC8
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange ampXRange; // 0xD4
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange ampYRange; // 0xE0
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange ampZRange; // 0xEC
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange displacementRange; // 0xF8
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange detailRange; // 0x104
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange curveAmpRange; // 0x110
		::System::String* layerMask; // 0x120
		::System::String* tag; // 0x128
		::System::Single rayDiatance; // 0x130
		::System::Single raySphereRadius; // 0x134

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEndPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETENDPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetStartPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETSTARTPOINT_OFFSET))(this, a1);
		}

		::LineLightingV2_LineLightingV2Param GetLineLightingV2Param(::LineLightingV2_LineLightingV2Param a1)
		{
			return ((::LineLightingV2_LineLightingV2Param(*)(::PVOID, ::LineLightingV2_LineLightingV2Param))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETLINELIGHTINGV2PARAM_OFFSET))(this, a1);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETDURATION_OFFSET))(this);
		}

		::System::Single GetUpdateEndDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDURATION_OFFSET))(this);
		}

		::System::Single GetUpdateEndDelayDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDELAYDURATION_OFFSET))(this);
		}

		::System::Single GetCurveWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETCURVEWIDTH_OFFSET))(this);
		}

		::System::Single Method_6_7A4445839B75D76B(::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_METHOD_6_7A4445839B75D76B_OFFSET))(this, a1);
		}
	};
}
