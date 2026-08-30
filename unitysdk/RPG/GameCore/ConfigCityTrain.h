#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConfigGetOffTrain; }
namespace RPG::GameCore { class ConfigGetOnTrain; }
namespace System { class String; }

#define RPG_GAMECORE_CONFIGCITYTRAIN_METHOD_2_8E2278D13F676A12_OFFSET UNITYSDK_OFFSET(0x1D9AF8F0)
#define RPG_GAMECORE_CONFIGCITYTRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B0020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigCityTrain_TypeDefinitionIndex = 16729;

	class ConfigCityTrain : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TrainName; // 0x10
		::System::Single BoostInitAcclerate; // 0x18
		::System::Single MaxBoostAccelerate; // 0x1C
		::System::Single WithTheBoostAcceleration; // 0x20
		::System::Single BrakeInitAcclerate; // 0x24
		::System::Single MaxBrakeAccelerate; // 0x28
		::System::Single WithTheBrakeAcceleration; // 0x2C
		::System::Single MoveSpeed; // 0x30
		::System::String* TrainPrefabPath; // 0x38
		::System::String* TrackPath; // 0x40
		::System::Single TrackPositionX; // 0x48
		::System::Single TrackPositionY; // 0x4C
		::System::Single TrackPositionZ; // 0x50
		::System::Single DepartureTnterval; // 0x54
		::System::Single DwellTime; // 0x58
		::System::Single CloseDoorTime; // 0x5C
		::System::Single HardBrakeAccelerateStart; // 0x60
		::System::Single HardBrakeAccelerateEnd; // 0x64
		::System::Single HardBrakeAttenuation; // 0x68
		::System::Single BlockAlertTime; // 0x6C
		::System::Single HardBrakeEffectMinSpeed; // 0x70
		::System::Single AvoidanceBoostTime; // 0x74
		::System::Single WheelViewDistance; // 0x78
		::RPG::GameCore::ConfigGetOnTrain* GetOnInfo; // 0x80
		::RPG::GameCore::ConfigGetOffTrain* GetOffInfo; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGCITYTRAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8E2278D13F676A12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigCityTrain*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigCityTrain*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGCITYTRAIN_METHOD_2_8E2278D13F676A12_OFFSET))(a1, a2);
		}
	};
}
