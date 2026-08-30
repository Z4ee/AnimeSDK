#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_DD30E7BBCC83D1C6_OFFSET UNITYSDK_OFFSET(0x1D6A6040)
#define RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_E3D262EAF63B58B3_OFFSET UNITYSDK_OFFSET(0x1D6A6090)
#define RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A6080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLittleGameLevelVarChange_TypeDefinitionIndex = 21180;

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

		static ::System::Void Method_4_DD30E7BBCC83D1C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLittleGameLevelVarChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_DD30E7BBCC83D1C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E3D262EAF63B58B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLittleGameLevelVarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_E3D262EAF63B58B3_OFFSET))(a1, a2);
		}
	};
}
