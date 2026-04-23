#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITGROUPSTATECHANGE_METHOD_4_6A4BC8747647FF94_OFFSET UNITYSDK_OFFSET(0x190FF9F0)
#define RPG_GAMECORE_WAITGROUPSTATECHANGE_METHOD_4_FBD0BBA51FD774D8_OFFSET UNITYSDK_OFFSET(0x190FFAE0)
#define RPG_GAMECORE_WAITGROUPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x190FFA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGroupStateChange_TypeDefinitionIndex = 19701;

	class WaitGroupStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::System::UInt32>* FromStates; // 0x30
		::System::Boolean FromAnyState; // 0x38
		::Il2CppArray<::System::UInt32>* ToStates; // 0x40
		::System::Boolean ToAnyState; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6A4BC8747647FF94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGroupStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGroupStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPSTATECHANGE_METHOD_4_6A4BC8747647FF94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FBD0BBA51FD774D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGroupStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPSTATECHANGE_METHOD_4_FBD0BBA51FD774D8_OFFSET))(a1, a2);
		}
	};
}
