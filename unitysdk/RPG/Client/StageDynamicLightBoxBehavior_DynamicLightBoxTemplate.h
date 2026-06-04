#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageDynamicLightBoxBehavior_FormationAdaptiveMode.h"
#include "unitysdk/RPG/Client/StageDynamicLightBoxBehavior_FormationmapType.h"
#include "unitysdk/RPG/Client/StageDynamicLightBoxBehavior_Layout.h"
#include "unitysdk/RPG/Client/StageDynamicLightBoxBehavior_SwitchMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_DYNAMICLIGHTBOXTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC904260)

namespace RPG::Client
{
	inline static constexpr unsigned int StageDynamicLightBoxBehavior_DynamicLightBoxTemplate_TypeDefinitionIndex = 66332;

	class StageDynamicLightBoxBehavior_DynamicLightBoxTemplate : public ::System::Object
	{
	public:
		::System::String* Label; // 0x10
		::UnityEngine::Texture2D* ProgressMap; // 0x18
		::UnityEngine::Texture2D* FormationMap; // 0x20
		::RPG::Client::StageDynamicLightBoxBehavior_FormationmapType FormationmapType; // 0x28
		::RPG::Client::StageDynamicLightBoxBehavior_Layout LayoutX; // 0x2C
		::RPG::Client::StageDynamicLightBoxBehavior_Layout LayoutY; // 0x30
		::UnityEngine::Vector2Int LightBoxDimension; // 0x34
		::UnityEngine::Vector2Int FormationRepeateCount; // 0x3C
		::UnityEngine::Gradient* EmissionColor; // 0x48
		::System::Single Threshold; // 0x50
		::System::Single EmissionInt; // 0x54
		::System::Single Thickness; // 0x58
		::System::Single Contrast; // 0x5C
		::System::Int32 AltasID; // 0x60
		::System::Int32 MainMapID; // 0x64
		::RPG::Client::StageDynamicLightBoxBehavior_SwitchMode Switch; // 0x68
		::System::Single PlaySpeed; // 0x6C
		::System::Single DurationTime; // 0x70
		::System::Boolean IsLoop; // 0x74
		::RPG::Client::StageDynamicLightBoxBehavior_FormationAdaptiveMode AdaptiveMode; // 0x78
		::UnityEngine::Vector2Int FormationAdaptiveSize; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_DYNAMICLIGHTBOXTEMPLATE__CTOR_OFFSET))(this);
		}
	};
}
