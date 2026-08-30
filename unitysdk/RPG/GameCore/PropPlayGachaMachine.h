#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPPLAYGACHAMACHINE_METHOD_3_75578C5706F8DA9B_OFFSET UNITYSDK_OFFSET(0x1D36B300)
#define RPG_GAMECORE_PROPPLAYGACHAMACHINE_METHOD_3_83BB6BAD6E9A1E15_OFFSET UNITYSDK_OFFSET(0x1D36B270)
#define RPG_GAMECORE_PROPPLAYGACHAMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36B2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPlayGachaMachine_TypeDefinitionIndex = 21721;

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

		static ::System::Void Method_3_83BB6BAD6E9A1E15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPlayGachaMachine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPlayGachaMachine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPLAYGACHAMACHINE_METHOD_3_83BB6BAD6E9A1E15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_75578C5706F8DA9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPlayGachaMachine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPlayGachaMachine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPLAYGACHAMACHINE_METHOD_3_75578C5706F8DA9B_OFFSET))(a1, a2);
		}
	};
}
