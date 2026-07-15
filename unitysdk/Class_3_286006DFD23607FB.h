#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareScreenRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_286006DFD23607FB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x140B9EB0)
#define CLASS_3_286006DFD23607FB__CTOR_OFFSET UNITYSDK_OFFSET(0x140B9E80)

inline static constexpr unsigned int Class_3_286006DFD23607FB_TypeDefinitionIndex = 52090;

class Class_3_286006DFD23607FB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareScreenRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + CLASS_3_286006DFD23607FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_286006DFD23607FB_EVALUATE_OFFSET))(this);
	}
};
