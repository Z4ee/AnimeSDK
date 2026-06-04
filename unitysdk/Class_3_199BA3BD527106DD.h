#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPropEventInBattle; }

#define CLASS_3_199BA3BD527106DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFB5170)
#define CLASS_3_199BA3BD527106DD__CTOR_OFFSET UNITYSDK_OFFSET(0xAFB5140)

inline static constexpr unsigned int Class_3_199BA3BD527106DD_TypeDefinitionIndex = 52080;

class Class_3_199BA3BD527106DD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerPropEventInBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPropEventInBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPropEventInBattle*))((::PBYTE)hIl2Cpp + CLASS_3_199BA3BD527106DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_199BA3BD527106DD_ONTASKBEGIN_OFFSET))(this);
	}
};
