#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CREATEBATTLEEVENT_METHOD_3_59245695FE4313AC_OFFSET UNITYSDK_OFFSET(0x1D9BC540)
#define RPG_GAMECORE_CREATEBATTLEEVENT_METHOD_3_F6CEB2847876E0E4_OFFSET UNITYSDK_OFFSET(0x1D9BC720)
#define RPG_GAMECORE_CREATEBATTLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BC710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleEvent_TypeDefinitionIndex = 22718;

	class CreateBattleEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EventID; // 0x18
		::RPG::GameCore::TargetEvaluator* PropertyFromTarget; // 0x20
		::RPG::GameCore::TargetEvaluator* SpecifyCaster; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x30
		::RPG::GameCore::TeamType Team; // 0x38
		::RPG::GameCore::TeamType TotalDamageTeam; // 0x3C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeCreateCallback; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBattleEventCreate; // 0x48
		::System::Boolean IsDynamicPreload; // 0x50
		::System::Boolean AllowDuplicate; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59245695FE4313AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENT_METHOD_3_59245695FE4313AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6CEB2847876E0E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENT_METHOD_3_F6CEB2847876E0E4_OFFSET))(a1, a2);
		}
	};
}
