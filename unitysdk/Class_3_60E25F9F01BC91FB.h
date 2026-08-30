#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityEvent; }
namespace System { class String; }

#define CLASS_3_60E25F9F01BC91FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6DBCF0)
#define CLASS_3_60E25F9F01BC91FB_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB6DBED0)
#define CLASS_3_60E25F9F01BC91FB_METHOD_3_443A8FD387045C5D_OFFSET UNITYSDK_OFFSET(0xB6DC000)
#define CLASS_3_60E25F9F01BC91FB_METHOD_3_BAE7592D149B0E7F_OFFSET UNITYSDK_OFFSET(0xB6DC110)
#define CLASS_3_60E25F9F01BC91FB__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DB940)
#define CLASS_3_60E25F9F01BC91FB__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB6DBD40)
#define CLASS_3_60E25F9F01BC91FB__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB6DBF30)

inline static constexpr unsigned int Class_3_60E25F9F01BC91FB_TypeDefinitionIndex = 52798;

class Class_3_60E25F9F01BC91FB : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitEntityEvent*>
{
public:
	::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x68
	::System::String* FGMKCOANOOK; // 0x70
	::System::UInt32 JGGDKOCIEGH; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityEvent*))((::PBYTE)hIl2Cpp + CLASS_3_60E25F9F01BC91FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E25F9F01BC91FB_DISPOSE_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E25F9F01BC91FB__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E25F9F01BC91FB__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_443A8FD387045C5D(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_60E25F9F01BC91FB_METHOD_3_443A8FD387045C5D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BAE7592D149B0E7F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_60E25F9F01BC91FB_METHOD_3_BAE7592D149B0E7F_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E25F9F01BC91FB_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}
};
