#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DisableHeadLookAtOverride; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3EE556D80046CDCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170B8900)
#define CLASS_3_3EE556D80046CDCE__CTOR_OFFSET UNITYSDK_OFFSET(0x170B88D0)

inline static constexpr unsigned int Class_3_3EE556D80046CDCE_TypeDefinitionIndex = 58235;

class Class_3_3EE556D80046CDCE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DisableHeadLookAtOverride*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableHeadLookAtOverride* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableHeadLookAtOverride*))((::PBYTE)hIl2Cpp + CLASS_3_3EE556D80046CDCE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3EE556D80046CDCE_ONTASKBEGIN_OFFSET))(this);
	}
};
