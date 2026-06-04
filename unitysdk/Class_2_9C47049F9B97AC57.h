#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckPredicateAxis; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9C47049F9B97AC57_METHOD_2_0A71AB1F1FA1EB4C_OFFSET UNITYSDK_OFFSET(0x138D0770)
#define CLASS_2_9C47049F9B97AC57_METHOD_2_512073A5E70F4E39_OFFSET UNITYSDK_OFFSET(0x138D0800)
#define CLASS_2_9C47049F9B97AC57_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x138D05B0)
#define CLASS_2_9C47049F9B97AC57__CTOR_OFFSET UNITYSDK_OFFSET(0x138D05A0)

inline static constexpr unsigned int Class_2_9C47049F9B97AC57_TypeDefinitionIndex = 50813;

class Class_2_9C47049F9B97AC57 : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckPredicateAxis* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::CheckPredicateAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckPredicateAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_9C47049F9B97AC57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C47049F9B97AC57_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_0A71AB1F1FA1EB4C()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C47049F9B97AC57_METHOD_2_0A71AB1F1FA1EB4C_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_512073A5E70F4E39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C47049F9B97AC57_METHOD_2_512073A5E70F4E39_OFFSET))(this);
	}
};
