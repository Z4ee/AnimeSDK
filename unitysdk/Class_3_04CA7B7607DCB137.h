#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByBreakStanceDamageType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_04CA7B7607DCB137_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14E8FD90)
#define CLASS_3_04CA7B7607DCB137__CTOR_OFFSET UNITYSDK_OFFSET(0x14E8FD60)

inline static constexpr unsigned int Class_3_04CA7B7607DCB137_TypeDefinitionIndex = 52015;

class Class_3_04CA7B7607DCB137 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByBreakStanceDamageType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByBreakStanceDamageType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByBreakStanceDamageType*))((::PBYTE)hIl2Cpp + CLASS_3_04CA7B7607DCB137__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04CA7B7607DCB137_EVALUATE_OFFSET))(this);
	}
};
