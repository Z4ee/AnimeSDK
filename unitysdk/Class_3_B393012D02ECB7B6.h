#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPartnerAnimSync; }

#define CLASS_3_B393012D02ECB7B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18557D60)
#define CLASS_3_B393012D02ECB7B6__CTOR_OFFSET UNITYSDK_OFFSET(0x18557D30)

inline static constexpr unsigned int Class_3_B393012D02ECB7B6_TypeDefinitionIndex = 55950;

class Class_3_B393012D02ECB7B6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerPartnerAnimSync*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPartnerAnimSync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPartnerAnimSync*))((::PBYTE)hIl2Cpp + CLASS_3_B393012D02ECB7B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B393012D02ECB7B6_ONTASKBEGIN_OFFSET))(this);
	}
};
