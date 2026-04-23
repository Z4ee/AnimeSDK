#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNPCOverrideBehaviorParameter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A4D380)
#define RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4D5E0)
#define RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4D370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCTrainPassengerParam_TypeDefinitionIndex = 16388;

	class LevelNPCTrainPassengerParam : public ::RPG::GameCore::LevelNPCOverrideBehaviorParameter
	{
	public:
		::System::UInt32 PassengerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCTrainPassengerParam*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCTrainPassengerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCTrainPassengerParam* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCTrainPassengerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
