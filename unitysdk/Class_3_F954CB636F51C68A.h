#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareRogueDiceRotateImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F954CB636F51C68A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11F1E110)
#define CLASS_3_F954CB636F51C68A__CTOR_OFFSET UNITYSDK_OFFSET(0x11F1E0E0)

inline static constexpr unsigned int Class_3_F954CB636F51C68A_TypeDefinitionIndex = 48559;

class Class_3_F954CB636F51C68A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareRogueDiceRotateImmediately*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*))((::PBYTE)hIl2Cpp + CLASS_3_F954CB636F51C68A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F954CB636F51C68A_EVALUATE_OFFSET))(this);
	}
};
