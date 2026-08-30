#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckRogueExploreWin; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0E5B986CF5773EC0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15624C60)
#define CLASS_3_0E5B986CF5773EC0__CTOR_OFFSET UNITYSDK_OFFSET(0x15624C30)

inline static constexpr unsigned int Class_3_0E5B986CF5773EC0_TypeDefinitionIndex = 58124;

class Class_3_0E5B986CF5773EC0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckRogueExploreWin*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + CLASS_3_0E5B986CF5773EC0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E5B986CF5773EC0_EVALUATE_OFFSET))(this);
	}
};
