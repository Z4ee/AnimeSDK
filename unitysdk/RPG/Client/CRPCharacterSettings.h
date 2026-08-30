#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CRPCHARACTERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xC97DF80)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPCharacterSettings_TypeDefinitionIndex = 67928;

	class CRPCharacterSettings : public ::System::Object
	{
	public:
		::System::Boolean EnableHairEyeBlend; // 0x10
		::System::Boolean EnableForwardEmission; // 0x11
		::System::Boolean EnableAndroidLowQuality; // 0x12
		::System::Boolean EnableSpringBone; // 0x13
		::System::Boolean EnableEmotionEyeBlink; // 0x14
		::System::Boolean EnableFootIK; // 0x15
		::System::Single CharEffectLODVariant; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPCHARACTERSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
