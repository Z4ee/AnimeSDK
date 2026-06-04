#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNPCOverrideBehaviorParameter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1987DFC0)
#define RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1987E350)
#define RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1987DFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCTrainPassengerParam_TypeDefinitionIndex = 16421;

	class LevelNPCTrainPassengerParam : public ::RPG::GameCore::LevelNPCOverrideBehaviorParameter
	{
	public:
		::System::UInt32 PassengerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCTrainPassengerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCTrainPassengerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCTrainPassengerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCTrainPassengerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCTRAINPASSENGERPARAM_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
