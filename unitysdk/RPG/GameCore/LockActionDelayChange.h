#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReasonMask.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOCKACTIONDELAYCHANGE_METHOD_3_6305CB962EAF72D5_OFFSET UNITYSDK_OFFSET(0x18A77520)
#define RPG_GAMECORE_LOCKACTIONDELAYCHANGE_METHOD_3_C77AF668774D8C1B_OFFSET UNITYSDK_OFFSET(0x18A775A0)
#define RPG_GAMECORE_LOCKACTIONDELAYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A77570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockActionDelayChange_TypeDefinitionIndex = 22253;

	class LockActionDelayChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LockTargetType; // 0x18
		::System::Boolean IsLock; // 0x20
		::System::String* LockKey; // 0x28
		::RPG::GameCore::TargetEvaluator* WhitelistSourceEntity; // 0x30
		::RPG::GameCore::ActionDelayChangeReasonMask WhitelistChangeReason; // 0x38
		::RPG::GameCore::ActionDelayChangeTypeMask WhitelistChangeType; // 0x3A
		::RPG::GameCore::ActionDelayChangeTypeMask WhitelistRedirectChangeType; // 0x3C
		::System::Boolean Preshow_UnlockOnBreak; // 0x3E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKACTIONDELAYCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6305CB962EAF72D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockActionDelayChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockActionDelayChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKACTIONDELAYCHANGE_METHOD_3_6305CB962EAF72D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C77AF668774D8C1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockActionDelayChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockActionDelayChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKACTIONDELAYCHANGE_METHOD_3_C77AF668774D8C1B_OFFSET))(a1, a2);
		}
	};
}
