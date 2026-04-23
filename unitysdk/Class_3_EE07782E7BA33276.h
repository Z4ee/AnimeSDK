#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPhotoGraphConditionSuccess; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EE07782E7BA33276_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12878000)
#define CLASS_3_EE07782E7BA33276__CTOR_OFFSET UNITYSDK_OFFSET(0x12877FD0)

inline static constexpr unsigned int Class_3_EE07782E7BA33276_TypeDefinitionIndex = 49017;

class Class_3_EE07782E7BA33276 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPhotoGraphConditionSuccess*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + CLASS_3_EE07782E7BA33276__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE07782E7BA33276_EVALUATE_OFFSET))(this);
	}
};
