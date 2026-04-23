#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VIBRATIONCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190F3060)
#define RPG_GAMECORE_VIBRATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190F32A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VibrationConfig_TypeDefinitionIndex = 15521;

	class VibrationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IntensityRTPCName; // 0x10
		::System::String* EventVibrationSetting; // 0x18
		::System::String* MotionLevelStateGroup; // 0x20
		::System::String* MotionLevelStateA; // 0x28
		::System::String* MotionLevelStateC; // 0x30
		::Il2CppArray<::System::UInt32>* MotionLevelAWhiteList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIBRATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::VibrationConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VibrationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIBRATIONCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
