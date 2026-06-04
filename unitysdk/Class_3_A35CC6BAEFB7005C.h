#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsScepter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A35CC6BAEFB7005C_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAC46B30)
#define CLASS_3_A35CC6BAEFB7005C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC46B00)

inline static constexpr unsigned int Class_3_A35CC6BAEFB7005C_TypeDefinitionIndex = 51296;

class Class_3_A35CC6BAEFB7005C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsScepter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsScepter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + CLASS_3_A35CC6BAEFB7005C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A35CC6BAEFB7005C_EVALUATE_OFFSET))(this);
	}
};
