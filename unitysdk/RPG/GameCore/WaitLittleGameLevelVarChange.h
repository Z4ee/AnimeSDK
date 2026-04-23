#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_768EF5E9EBB3E0DB_OFFSET UNITYSDK_OFFSET(0x19100F00)
#define RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_C59B48179BB839AD_OFFSET UNITYSDK_OFFSET(0x19100FE0)
#define RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19100F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLittleGameLevelVarChange_TypeDefinitionIndex = 20316;

	class WaitLittleGameLevelVarChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::RPG::GameCore::PredicateConfig* Condition; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_768EF5E9EBB3E0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLittleGameLevelVarChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_768EF5E9EBB3E0DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C59B48179BB839AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLittleGameLevelVarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_C59B48179BB839AD_OFFSET))(a1, a2);
		}
	};
}
