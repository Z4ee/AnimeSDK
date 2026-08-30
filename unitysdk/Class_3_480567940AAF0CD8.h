#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByAlertLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_480567940AAF0CD8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19158770)
#define CLASS_3_480567940AAF0CD8__CTOR_OFFSET UNITYSDK_OFFSET(0x19158740)

inline static constexpr unsigned int Class_3_480567940AAF0CD8_TypeDefinitionIndex = 52467;

class Class_3_480567940AAF0CD8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByAlertLevel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + CLASS_3_480567940AAF0CD8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_480567940AAF0CD8_EVALUATE_OFFSET))(this);
	}
};
