#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByIsMoving; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BAB1320665BABF8C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11B5A9E0)
#define CLASS_3_BAB1320665BABF8C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B5A9B0)

inline static constexpr unsigned int Class_3_BAB1320665BABF8C_TypeDefinitionIndex = 49956;

class Class_3_BAB1320665BABF8C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByIsMoving*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByIsMoving* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + CLASS_3_BAB1320665BABF8C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAB1320665BABF8C_EVALUATE_OFFSET))(this);
	}
};
