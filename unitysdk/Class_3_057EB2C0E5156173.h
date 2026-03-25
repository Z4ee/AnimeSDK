#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvTriggerEffectList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_057EB2C0E5156173_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AA8240)
#define CLASS_3_057EB2C0E5156173__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA8210)

inline static constexpr unsigned int Class_3_057EB2C0E5156173_TypeDefinitionIndex = 42531;

class Class_3_057EB2C0E5156173 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvTriggerEffectList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerEffectList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_3_057EB2C0E5156173__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057EB2C0E5156173_ONTASKBEGIN_OFFSET))(this);
	}
};
