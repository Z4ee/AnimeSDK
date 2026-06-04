#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_METHOD_3_68C201A56473175D_OFFSET UNITYSDK_OFFSET(0x196814F0)
#define RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_METHOD_3_B80A8BF0D333B82E_OFFSET UNITYSDK_OFFSET(0x19681450)
#define RPG_GAMECORE_CREATEBATTLEEVENTSERVANT__CTOR_OFFSET UNITYSDK_OFFSET(0x196814B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleEventServant_TypeDefinitionIndex = 22149;

	class CreateBattleEventServant : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TriggerAllBlockedBECallbacks; // 0x18
		::RPG::GameCore::DynamicFloat* EventID; // 0x20
		::RPG::GameCore::TargetEvaluator* SummonerBE; // 0x28
		::RPG::GameCore::DynamicFloat* InheritHPRatio; // 0x30
		::RPG::GameCore::DynamicFloat* InheritSpeedRatio; // 0x38
		::System::Boolean OnlyAllowHealBySelfOrSummoner; // 0x40
		::System::Boolean TriggerRedBreakCallbacks; // 0x41
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x48
		::RPG::GameCore::TeamType Team; // 0x50
		::RPG::GameCore::TeamType TotalDamageTeam; // 0x54
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeCreateCallback; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBattleEventCreate; // 0x60
		::System::Boolean IsDynamicPreload; // 0x68
		::System::Boolean AllowDuplicate; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTSERVANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B80A8BF0D333B82E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventServant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventServant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_METHOD_3_B80A8BF0D333B82E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68C201A56473175D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventServant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTSERVANT_METHOD_3_68C201A56473175D_OFFSET))(a1, a2);
		}
	};
}
