#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByContainCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FFF732FD960A3D1A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9E53260)
#define CLASS_3_FFF732FD960A3D1A__CTOR_OFFSET UNITYSDK_OFFSET(0x9E53230)

inline static constexpr unsigned int Class_3_FFF732FD960A3D1A_TypeDefinitionIndex = 50367;

class Class_3_FFF732FD960A3D1A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByContainCustomString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_FFF732FD960A3D1A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFF732FD960A3D1A_EVALUATE_OFFSET))(this);
	}
};
