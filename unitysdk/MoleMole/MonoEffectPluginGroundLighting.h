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

#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETCURVEWIDTH_OFFSET UNITYSDK_OFFSET(0x142A5BC0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETDURATION_OFFSET UNITYSDK_OFFSET(0x142A5950)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETENDPOINT_OFFSET UNITYSDK_OFFSET(0x142A4E50)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETLINELIGHTINGV2PARAM_OFFSET UNITYSDK_OFFSET(0x142A5360)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x142A50F0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDELAYDURATION_OFFSET UNITYSDK_OFFSET(0x142A5AF0)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_GETUPDATEENDDURATION_OFFSET UNITYSDK_OFFSET(0x142A5A20)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_METHOD_6_7A4445839B75D76B_OFFSET UNITYSDK_OFFSET(0x142A5070)
#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x142A5CA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginGroundLighting_TypeDefinitionIndex = 47267;

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
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange altRotationRange; // 0xB8
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange ampXRange; // 0xC4
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange ampYRange; // 0xD0
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange ampZRange; // 0xDC
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange displacementRange; // 0xE8
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange detailRange; // 0xF4
		::MoleMole::MonoEffectPluginGroundLighting_LineFloatRange curveAmpRange; // 0x100
		::System::String* layerMask; // 0x110
		::System::String* tag; // 0x118
		::System::Single rayDiatance; // 0x120
		::System::Single raySphereRadius; // 0x124

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
