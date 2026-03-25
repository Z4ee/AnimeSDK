#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_E71924F20B00CC55;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERRETURNCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174E6710)
#define RPG_GAMECORE_PLAYERRETURNCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174E6D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnConfigRow_TypeDefinitionIndex = 13259;

	class PlayerReturnConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommendAvatar; // 0x10
		::Il2CppArray<::System::UInt32>* RecommendActivity; // 0x18
		::Il2CppArray<::System::UInt32>* KeyPointID; // 0x20
		::System::String* DispatchLink; // 0x28
		::Il2CppArray<::System::UInt32>* LoginReward; // 0x30
		::Il2CppArray<::System::UInt32>* QuestGroupID; // 0x38
		::Il2CppArray<::System::UInt32>* RecommendMission; // 0x40
		::Il2CppArray<::Class_1_E71924F20B00CC55*>* ExtraMultipleDropList; // 0x48
		::Il2CppArray<::System::UInt32>* ReturnRewardIDList; // 0x50
		::System::UInt32 ActivityModuleID; // 0x58
		::System::UInt32 LimitTime; // 0x5C
		::System::UInt32 DailyDoubleTime; // 0x60
		::System::UInt32 ValidityPeriod; // 0x64
		::System::UInt32 TotalDoubleTime; // 0x68
		::System::UInt32 FarmMultipleDropID; // 0x6C
		::System::UInt32 PlayerReturnID; // 0x70
		::System::UInt32 BpExpExtraRatio; // 0x74
		::System::UInt32 ExtraHcoinTime; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerReturnConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
