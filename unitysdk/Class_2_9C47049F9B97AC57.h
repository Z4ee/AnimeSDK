#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_2.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckPredicateAxis; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9C47049F9B97AC57_METHOD_2_0A71AB1F1FA1EB4C_OFFSET UNITYSDK_OFFSET(0x8AE27A0)
#define CLASS_2_9C47049F9B97AC57_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x8AE2830)
#define CLASS_2_9C47049F9B97AC57_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x8AE25E0)
#define CLASS_2_9C47049F9B97AC57__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE25D0)

inline static constexpr unsigned int Class_2_9C47049F9B97AC57_TypeDefinitionIndex = 43449;

class Class_2_9C47049F9B97AC57 : public ::Class_1_F9FBCC956DFCF137_2
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::RPG::GameCore::CheckPredicateAxis* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::CheckPredicateAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckPredicateAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_9C47049F9B97AC57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C47049F9B97AC57_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_0A71AB1F1FA1EB4C()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C47049F9B97AC57_METHOD_2_0A71AB1F1FA1EB4C_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C47049F9B97AC57_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
