#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByInTrackCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F89E6BBCA70956D8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16B55BC0)
#define CLASS_3_F89E6BBCA70956D8__CTOR_OFFSET UNITYSDK_OFFSET(0x16B55B90)

inline static constexpr unsigned int Class_3_F89E6BBCA70956D8_TypeDefinitionIndex = 50720;

class Class_3_F89E6BBCA70956D8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByInTrackCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTrackCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + CLASS_3_F89E6BBCA70956D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F89E6BBCA70956D8_EVALUATE_OFFSET))(this);
	}
};
