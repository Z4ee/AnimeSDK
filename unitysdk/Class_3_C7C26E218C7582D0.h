#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerGridFightWaveSettle; }

#define CLASS_3_C7C26E218C7582D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17BA8A50)
#define CLASS_3_C7C26E218C7582D0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA8A20)

inline static constexpr unsigned int Class_3_C7C26E218C7582D0_TypeDefinitionIndex = 55927;

class Class_3_C7C26E218C7582D0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerGridFightWaveSettle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerGridFightWaveSettle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerGridFightWaveSettle*))((::PBYTE)hIl2Cpp + CLASS_3_C7C26E218C7582D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C26E218C7582D0_ONTASKBEGIN_OFFSET))(this);
	}
};
