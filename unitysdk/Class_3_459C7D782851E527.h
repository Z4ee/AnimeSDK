#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

namespace RPG::GameCore { class ByIsRogueTournCurRoomFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_459C7D782851E527_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1119AED0)
#define CLASS_3_459C7D782851E527__CTOR_OFFSET UNITYSDK_OFFSET(0x1119AE40)

inline static constexpr unsigned int Class_3_459C7D782851E527_TypeDefinitionIndex = 53470;

class Class_3_459C7D782851E527 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsRogueTournCurRoomFinish*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::RogueSubMode>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + CLASS_3_459C7D782851E527__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_459C7D782851E527_EVALUATE_OFFSET))(this);
	}
};
