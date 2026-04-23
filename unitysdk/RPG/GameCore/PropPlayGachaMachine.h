#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPPLAYGACHAMACHINE_METHOD_3_449E1C33196F4D5B_OFFSET UNITYSDK_OFFSET(0x18C71680)
#define RPG_GAMECORE_PROPPLAYGACHAMACHINE_METHOD_3_D8E97B551A003F4C_OFFSET UNITYSDK_OFFSET(0x18C71540)
#define RPG_GAMECORE_PROPPLAYGACHAMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C715F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPlayGachaMachine_TypeDefinitionIndex = 20822;

	class PropPlayGachaMachine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* RollShopId; // 0x20
		::System::Boolean IsTigerMachine; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* RewardCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIExit; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnGachaCloseUI; // 0x40
		::System::Single GachaAnimDelay; // 0x48
		::System::Boolean IsRandomReward; // 0x4C
		::System::Int32 RewardGrade; // 0x50
		::System::Boolean IsRandomSlotNum; // 0x54
		::System::Int32 SlotNum; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPLAYGACHAMACHINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8E97B551A003F4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPlayGachaMachine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPlayGachaMachine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPLAYGACHAMACHINE_METHOD_3_D8E97B551A003F4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_449E1C33196F4D5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPlayGachaMachine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPlayGachaMachine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPLAYGACHAMACHINE_METHOD_3_449E1C33196F4D5B_OFFSET))(a1, a2);
		}
	};
}
