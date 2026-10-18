#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_547;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupEvent; }
namespace System { class String; }

#define CLASS_3_8704178D7D215E2F_METHOD_3_3FB378AD48E4B10B_OFFSET UNITYSDK_OFFSET(0x15572430)
#define CLASS_3_8704178D7D215E2F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15572090)
#define CLASS_3_8704178D7D215E2F__CTOR_OFFSET UNITYSDK_OFFSET(0x15571F20)
#define CLASS_3_8704178D7D215E2F__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x155720F0)
#define CLASS_3_8704178D7D215E2F__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15572230)
#define CLASS_3_8704178D7D215E2F__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15572360)

inline static constexpr unsigned int Class_3_8704178D7D215E2F_TypeDefinitionIndex = 52530;

class Class_3_8704178D7D215E2F : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGroupEvent*>
{
public:
	::System::String* FGMKCOANOOK; // 0x68
	::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupEvent*))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_3FB378AD48E4B10B(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F_METHOD_3_3FB378AD48E4B10B_OFFSET))(this, a1);
	}
};
