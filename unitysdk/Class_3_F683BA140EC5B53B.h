#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPropInteractBtnSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F683BA140EC5B53B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE02CC80)
#define CLASS_3_F683BA140EC5B53B_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE02CC90)
#define CLASS_3_F683BA140EC5B53B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE02CC00)
#define CLASS_3_F683BA140EC5B53B__CTOR_OFFSET UNITYSDK_OFFSET(0xE02CBD0)

inline static constexpr unsigned int Class_3_F683BA140EC5B53B_TypeDefinitionIndex = 58717;

class Class_3_F683BA140EC5B53B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPropInteractBtnSwitch*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropInteractBtnSwitch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropInteractBtnSwitch*))((::PBYTE)hIl2Cpp + CLASS_3_F683BA140EC5B53B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F683BA140EC5B53B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F683BA140EC5B53B_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F683BA140EC5B53B_ONSKIP_OFFSET))(this);
	}
};
