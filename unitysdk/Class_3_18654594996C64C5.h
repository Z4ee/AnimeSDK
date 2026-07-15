#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerLittleGameCustomEvent; }

#define CLASS_3_18654594996C64C5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DBDEB0)
#define CLASS_3_18654594996C64C5__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBDE80)

inline static constexpr unsigned int Class_3_18654594996C64C5_TypeDefinitionIndex = 50561;

class Class_3_18654594996C64C5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerLittleGameCustomEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerLittleGameCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_18654594996C64C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18654594996C64C5_ONTASKBEGIN_OFFSET))(this);
	}
};
