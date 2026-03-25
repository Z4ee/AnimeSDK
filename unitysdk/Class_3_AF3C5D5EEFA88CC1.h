#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnLockPlayerControl; }

#define CLASS_3_AF3C5D5EEFA88CC1_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xA7016C0)
#define CLASS_3_AF3C5D5EEFA88CC1_METHOD_3_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xA701750)
#define CLASS_3_AF3C5D5EEFA88CC1_METHOD_3_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0xA701990)
#define CLASS_3_AF3C5D5EEFA88CC1_ONSKIP_OFFSET UNITYSDK_OFFSET(0xA7019E0)
#define CLASS_3_AF3C5D5EEFA88CC1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA701700)
#define CLASS_3_AF3C5D5EEFA88CC1__CTOR_OFFSET UNITYSDK_OFFSET(0xA7016D0)

inline static constexpr unsigned int Class_3_AF3C5D5EEFA88CC1_TypeDefinitionIndex = 43291;

class Class_3_AF3C5D5EEFA88CC1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UnLockPlayerControl*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnLockPlayerControl* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnLockPlayerControl*))((::PBYTE)hIl2Cpp + CLASS_3_AF3C5D5EEFA88CC1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF3C5D5EEFA88CC1_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF3C5D5EEFA88CC1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF3C5D5EEFA88CC1_METHOD_3_A88B36294D55B85C_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF3C5D5EEFA88CC1_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF3C5D5EEFA88CC1_METHOD_3_9D8CB5E47C1952BD_OFFSET))(this);
	}
};
