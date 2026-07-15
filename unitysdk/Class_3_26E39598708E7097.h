#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEnableOwnerIdleShow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_26E39598708E7097_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152A1A00)
#define CLASS_3_26E39598708E7097__CTOR_OFFSET UNITYSDK_OFFSET(0x152A19D0)

inline static constexpr unsigned int Class_3_26E39598708E7097_TypeDefinitionIndex = 49968;

class Class_3_26E39598708E7097 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEnableOwnerIdleShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableOwnerIdleShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableOwnerIdleShow*))((::PBYTE)hIl2Cpp + CLASS_3_26E39598708E7097__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26E39598708E7097_ONTASKBEGIN_OFFSET))(this);
	}
};
