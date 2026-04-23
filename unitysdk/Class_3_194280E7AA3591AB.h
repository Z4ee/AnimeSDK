#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsEnableNegativeHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_194280E7AA3591AB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9BC38D0)
#define CLASS_3_194280E7AA3591AB__CTOR_OFFSET UNITYSDK_OFFSET(0x9BC38A0)

inline static constexpr unsigned int Class_3_194280E7AA3591AB_TypeDefinitionIndex = 50749;

class Class_3_194280E7AA3591AB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsEnableNegativeHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + CLASS_3_194280E7AA3591AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_194280E7AA3591AB_EVALUATE_OFFSET))(this);
	}
};
