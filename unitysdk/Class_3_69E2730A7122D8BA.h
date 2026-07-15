#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtGridMoveToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_69E2730A7122D8BA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1703E590)
#define CLASS_3_69E2730A7122D8BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1703E560)

inline static constexpr unsigned int Class_3_69E2730A7122D8BA_TypeDefinitionIndex = 51706;

class Class_3_69E2730A7122D8BA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtGridMoveToTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtGridMoveToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtGridMoveToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_69E2730A7122D8BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69E2730A7122D8BA_ONTASKBEGIN_OFFSET))(this);
	}
};
