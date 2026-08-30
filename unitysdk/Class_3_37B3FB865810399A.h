#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_1_E0103A0EA6CD0F4C;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLittleGameLevelVarChange; }
namespace System { class String; }

#define CLASS_3_37B3FB865810399A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154E9A90)
#define CLASS_3_37B3FB865810399A__CTOR_OFFSET UNITYSDK_OFFSET(0x154E9880)
#define CLASS_3_37B3FB865810399A__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x154E9AF0)
#define CLASS_3_37B3FB865810399A__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x154E9BF0)
#define CLASS_3_37B3FB865810399A__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x154E9E50)

inline static constexpr unsigned int Class_3_37B3FB865810399A_TypeDefinitionIndex = 53245;

class Class_3_37B3FB865810399A : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitLittleGameLevelVarChange*>
{
public:
	::Class_1_E0103A0EA6CD0F4C* DJBFOOCPFGH; // 0x68
	::System::String* MMBCEDEIGPK; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLittleGameLevelVarChange*))((::PBYTE)hIl2Cpp + CLASS_3_37B3FB865810399A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B3FB865810399A_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B3FB865810399A__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B3FB865810399A__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B3FB865810399A__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
