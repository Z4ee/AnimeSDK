#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_METHOD_3_072AD0E25B0A6EB2_OFFSET UNITYSDK_OFFSET(0x19A811E0)
#define RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_METHOD_3_7A28C3E53CFDB510_OFFSET UNITYSDK_OFFSET(0x19A81160)
#define RPG_GAMECORE_PREDICATETASKLISTWITHFAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x19A811B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PredicateTaskListWithFail_TypeDefinitionIndex = 22512;

	class PredicateTaskListWithFail : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLISTWITHFAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A28C3E53CFDB510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateTaskListWithFail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateTaskListWithFail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_METHOD_3_7A28C3E53CFDB510_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_072AD0E25B0A6EB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateTaskListWithFail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateTaskListWithFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_METHOD_3_072AD0E25B0A6EB2_OFFSET))(a1, a2);
		}
	};
}
