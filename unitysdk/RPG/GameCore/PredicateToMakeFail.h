#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_PREDICATETOMAKEFAIL_METHOD_3_4753A87FD3BE224C_OFFSET UNITYSDK_OFFSET(0x1BA151C0)
#define RPG_GAMECORE_PREDICATETOMAKEFAIL_METHOD_3_656930E61998732B_OFFSET UNITYSDK_OFFSET(0x1BA15180)
#define RPG_GAMECORE_PREDICATETOMAKEFAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA151B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PredicateToMakeFail_TypeDefinitionIndex = 22910;

	class PredicateToMakeFail : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETOMAKEFAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_656930E61998732B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateToMakeFail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateToMakeFail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETOMAKEFAIL_METHOD_3_656930E61998732B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4753A87FD3BE224C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateToMakeFail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateToMakeFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETOMAKEFAIL_METHOD_3_4753A87FD3BE224C_OFFSET))(a1, a2);
		}
	};
}
