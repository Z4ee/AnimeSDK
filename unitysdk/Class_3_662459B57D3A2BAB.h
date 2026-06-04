#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_662459B57D3A2BAB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13979EF0)
#define CLASS_3_662459B57D3A2BAB__CTOR_OFFSET UNITYSDK_OFFSET(0x13979EC0)

inline static constexpr unsigned int Class_3_662459B57D3A2BAB_TypeDefinitionIndex = 51003;

class Class_3_662459B57D3A2BAB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSPRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSPRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSPRatio*))((::PBYTE)hIl2Cpp + CLASS_3_662459B57D3A2BAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_662459B57D3A2BAB_EVALUATE_OFFSET))(this);
	}
};
