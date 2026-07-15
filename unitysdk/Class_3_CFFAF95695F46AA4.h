#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePhoneMessageItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CFFAF95695F46AA4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1506B7E0)
#define CLASS_3_CFFAF95695F46AA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1506B7B0)

inline static constexpr unsigned int Class_3_CFFAF95695F46AA4_TypeDefinitionIndex = 50195;

class Class_3_CFFAF95695F46AA4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePhoneMessageItem*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + CLASS_3_CFFAF95695F46AA4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFFAF95695F46AA4_EVALUATE_OFFSET))(this);
	}
};
