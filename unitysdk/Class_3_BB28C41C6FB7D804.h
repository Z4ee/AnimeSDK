#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectOnAnchor; }

#define CLASS_3_BB28C41C6FB7D804_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16511720)
#define CLASS_3_BB28C41C6FB7D804__CTOR_OFFSET UNITYSDK_OFFSET(0x165116F0)

inline static constexpr unsigned int Class_3_BB28C41C6FB7D804_TypeDefinitionIndex = 56153;

class Class_3_BB28C41C6FB7D804 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerEffectOnAnchor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectOnAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectOnAnchor*))((::PBYTE)hIl2Cpp + CLASS_3_BB28C41C6FB7D804__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB28C41C6FB7D804_ONTASKBEGIN_OFFSET))(this);
	}
};
