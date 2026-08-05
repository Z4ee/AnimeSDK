#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_6159B0A974ACF7A1;
class Class_2_F69D29AB796376C2;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_QUICKEDITCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19986D10)

namespace MoleMole
{
	inline static constexpr unsigned int QuickEditContext_TypeDefinitionIndex = 42254;

	class QuickEditContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckAvatarHasLock; // 0x28
		::Class_2_F69D29AB796376C2* QuestCfg; // 0x30
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckBuddyHasLock; // 0x38
		::Class_1_6159B0A974ACF7A1* ueHandler; // 0x40
		::System::Action_2<::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*>* OnSelectTeamAction; // 0x48
		::System::Boolean withOutBattle; // 0x50
		::System::Boolean ApplyTeamWhenLock; // 0x51
		::System::Boolean IsHideOkBtn; // 0x52
		::System::Boolean isTwoTeam; // 0x53
		::System::Boolean IsBigScene; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKEDITCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
