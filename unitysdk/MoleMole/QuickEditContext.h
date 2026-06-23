#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_F69D29AB796376C2;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_QUICKEDITCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x160E9F30)

namespace MoleMole
{
	inline static constexpr unsigned int QuickEditContext_TypeDefinitionIndex = 50049;

	class QuickEditContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckBuddyHasLock; // 0x28
		::Class_2_F69D29AB796376C2* QuestCfg; // 0x30
		::System::Action_2<::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*>* OnSelectTeamAction; // 0x38
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckAvatarHasLock; // 0x40
		::System::Boolean ApplyTeamWhenLock; // 0x48
		::System::Boolean IsBigScene; // 0x49
		::System::Boolean isTwoTeam; // 0x4A
		::System::Boolean IsHideOkBtn; // 0x4B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKEDITCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
