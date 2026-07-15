#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommunicationSettings_AkCommSystem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKCOMMUNICATIONSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B9641D0)
#define AKCOMMUNICATIONSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B963FE0)
#define AKCOMMUNICATIONSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B964100)
#define AKCOMMUNICATIONSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B963F30)
#define AKCOMMUNICATIONSETTINGS_GET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x1B964720)
#define AKCOMMUNICATIONSETTINGS_GET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1B964670)
#define AKCOMMUNICATIONSETTINGS_GET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x1B9647D0)
#define AKCOMMUNICATIONSETTINGS_GET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x1B964510)
#define AKCOMMUNICATIONSETTINGS_GET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x1B964460)
#define AKCOMMUNICATIONSETTINGS_GET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x1B9645C0)
#define AKCOMMUNICATIONSETTINGS_GET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1B9643B0)
#define AKCOMMUNICATIONSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B963F80)
#define AKCOMMUNICATIONSETTINGS_SET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x1B9605C0)
#define AKCOMMUNICATIONSETTINGS_SET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1B960680)
#define AKCOMMUNICATIONSETTINGS_SET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x1B960740)
#define AKCOMMUNICATIONSETTINGS_SET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x1B960440)
#define AKCOMMUNICATIONSETTINGS_SET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x1B960380)
#define AKCOMMUNICATIONSETTINGS_SET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x1B960500)
#define AKCOMMUNICATIONSETTINGS_SET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1B9602C0)
#define AKCOMMUNICATIONSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B957B60)
#define AKCOMMUNICATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B963F20)

inline static constexpr unsigned int AkCommunicationSettings_TypeDefinitionIndex = 41993;

class AkCommunicationSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkCommunicationSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkCommunicationSettings*))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_uPoolSize(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_UPOOLSIZE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uPoolSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_UPOOLSIZE_OFFSET))(this);
	}

	::System::Void set_uDiscoveryBroadcastPort(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_UDISCOVERYBROADCASTPORT_OFFSET))(this, a1);
	}

	::System::UInt16 get_uDiscoveryBroadcastPort()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_UDISCOVERYBROADCASTPORT_OFFSET))(this);
	}

	::System::Void set_uCommandPort(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_UCOMMANDPORT_OFFSET))(this, a1);
	}

	::System::UInt16 get_uCommandPort()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_UCOMMANDPORT_OFFSET))(this);
	}

	::System::Void set_uNotificationPort(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_UNOTIFICATIONPORT_OFFSET))(this, a1);
	}

	::System::UInt16 get_uNotificationPort()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_UNOTIFICATIONPORT_OFFSET))(this);
	}

	::System::Void set_commSystem(::AkCommunicationSettings_AkCommSystem a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkCommunicationSettings_AkCommSystem))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_COMMSYSTEM_OFFSET))(this, a1);
	}

	::AkCommunicationSettings_AkCommSystem get_commSystem()
	{
		return ((::AkCommunicationSettings_AkCommSystem(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_COMMSYSTEM_OFFSET))(this);
	}

	::System::Void set_bInitSystemLib(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_BINITSYSTEMLIB_OFFSET))(this, a1);
	}

	::System::Boolean get_bInitSystemLib()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_BINITSYSTEMLIB_OFFSET))(this);
	}

	::System::Void set_szAppNetworkName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_SZAPPNETWORKNAME_OFFSET))(this, a1);
	}

	::System::String* get_szAppNetworkName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_SZAPPNETWORKNAME_OFFSET))(this);
	}
};
