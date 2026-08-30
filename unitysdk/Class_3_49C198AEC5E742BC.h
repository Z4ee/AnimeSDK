#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetIsBetweenCameraAndAnother; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_49C198AEC5E742BC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11B7D290)
#define CLASS_3_49C198AEC5E742BC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B7D260)

inline static constexpr unsigned int Class_3_49C198AEC5E742BC_TypeDefinitionIndex = 54929;

class Class_3_49C198AEC5E742BC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + CLASS_3_49C198AEC5E742BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49C198AEC5E742BC_EVALUATE_OFFSET))(this);
	}
};
