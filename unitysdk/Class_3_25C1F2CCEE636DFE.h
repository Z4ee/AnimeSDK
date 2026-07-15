#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetTargetAlertValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_25C1F2CCEE636DFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B73170)
#define CLASS_3_25C1F2CCEE636DFE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B73140)

inline static constexpr unsigned int Class_3_25C1F2CCEE636DFE_TypeDefinitionIndex = 50115;

class Class_3_25C1F2CCEE636DFE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetTargetAlertValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetTargetAlertValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetTargetAlertValue*))((::PBYTE)hIl2Cpp + CLASS_3_25C1F2CCEE636DFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25C1F2CCEE636DFE_ONTASKBEGIN_OFFSET))(this);
	}
};
