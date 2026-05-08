#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Internal/SingletonBase_1.h"

namespace System { class String; }

#define ADBEXECUTOR_CONNECTDEVICE_OFFSET UNITYSDK_OFFSET(0x1BAADE70)
#define ADBEXECUTOR_GETFIRSTCONNECTEDANDROIDDEVICE_OFFSET UNITYSDK_OFFSET(0x1BAAD6D0)
#define ADBEXECUTOR_ISFORWARDING_OFFSET UNITYSDK_OFFSET(0x1BAAD6C0)
#define ADBEXECUTOR_LOADADBPATH_OFFSET UNITYSDK_OFFSET(0x1BAAD5C0)
#define ADBEXECUTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAD3A0)

inline static constexpr unsigned int ADBExecutor_TypeDefinitionIndex = 36467;

class ADBExecutor : public ::RichTap::Internal::SingletonBase_1<::ADBExecutor*>
{
public:
	::System::String* adbPath; // 0x10
	::System::Boolean forward; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBEXECUTOR__CTOR_OFFSET))(this);
	}

	::System::Void LoadADBPath()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBEXECUTOR_LOADADBPATH_OFFSET))(this);
	}

	::System::Boolean IsForwarding()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBEXECUTOR_ISFORWARDING_OFFSET))(this);
	}

	::System::String* GetFirstConnectedAndroidDevice()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBEXECUTOR_GETFIRSTCONNECTEDANDROIDDEVICE_OFFSET))(this);
	}

	::System::Void ConnectDevice(::System::String* deviceId, ::System::Int32 hostPort, ::System::Int32 targetPort)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ADBEXECUTOR_CONNECTDEVICE_OFFSET))(this, deviceId, hostPort, targetPort);
	}
};
