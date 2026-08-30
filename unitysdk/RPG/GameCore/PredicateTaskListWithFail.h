#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_METHOD_3_072AD0E25B0A6EB2_OFFSET UNITYSDK_OFFSET(0x1D359C80)
#define RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_METHOD_3_720609E7FFAB392D_OFFSET UNITYSDK_OFFSET(0x1D359C40)
#define RPG_GAMECORE_PREDICATETASKLISTWITHFAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D359C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PredicateTaskListWithFail_TypeDefinitionIndex = 23542;

	class PredicateTaskListWithFail : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLISTWITHFAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_720609E7FFAB392D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateTaskListWithFail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateTaskListWithFail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_METHOD_3_720609E7FFAB392D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_072AD0E25B0A6EB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateTaskListWithFail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateTaskListWithFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLISTWITHFAIL_METHOD_3_072AD0E25B0A6EB2_OFFSET))(a1, a2);
		}
	};
}
