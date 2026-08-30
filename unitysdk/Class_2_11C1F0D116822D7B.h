#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckPredicateAxis; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_11C1F0D116822D7B_METHOD_2_0A71AB1F1FA1EB4C_OFFSET UNITYSDK_OFFSET(0x19AC1A10)
#define CLASS_2_11C1F0D116822D7B_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x19AC17F0)
#define CLASS_2_11C1F0D116822D7B__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC17E0)

inline static constexpr unsigned int Class_2_11C1F0D116822D7B_TypeDefinitionIndex = 54582;

class Class_2_11C1F0D116822D7B : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckPredicateAxis* IGHAHBNLIJA; // 0x18
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::CheckPredicateAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckPredicateAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_11C1F0D116822D7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11C1F0D116822D7B_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_0A71AB1F1FA1EB4C()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11C1F0D116822D7B_METHOD_2_0A71AB1F1FA1EB4C_OFFSET))(this);
	}
};
