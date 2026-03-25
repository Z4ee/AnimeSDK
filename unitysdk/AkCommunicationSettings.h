#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommunicationSettings_AkCommSystem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKCOMMUNICATIONSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18BA4A10)
#define AKCOMMUNICATIONSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BA4920)
#define AKCOMMUNICATIONSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BA49A0)
#define AKCOMMUNICATIONSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18BA4810)
#define AKCOMMUNICATIONSETTINGS_GET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x18BA4F20)
#define AKCOMMUNICATIONSETTINGS_GET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x18BA4E70)
#define AKCOMMUNICATIONSETTINGS_GET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x18BA4FD0)
#define AKCOMMUNICATIONSETTINGS_GET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x18BA4D10)
#define AKCOMMUNICATIONSETTINGS_GET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x18BA4C60)
#define AKCOMMUNICATIONSETTINGS_GET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x18BA4DC0)
#define AKCOMMUNICATIONSETTINGS_GET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x18BA4BB0)
#define AKCOMMUNICATIONSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18BA4860)
#define AKCOMMUNICATIONSETTINGS_SET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x18BA1480)
#define AKCOMMUNICATIONSETTINGS_SET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x18BA1540)
#define AKCOMMUNICATIONSETTINGS_SET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x18BA1600)
#define AKCOMMUNICATIONSETTINGS_SET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x18BA1300)
#define AKCOMMUNICATIONSETTINGS_SET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x18BA1240)
#define AKCOMMUNICATIONSETTINGS_SET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x18BA13C0)
#define AKCOMMUNICATIONSETTINGS_SET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x18BA1180)
#define AKCOMMUNICATIONSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B985B0)
#define AKCOMMUNICATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA4800)

inline static constexpr unsigned int AkCommunicationSettings_TypeDefinitionIndex = 34532;

class AkCommunicationSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkCommunicationSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkCommunicationSettings*))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_uPoolSize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_UPOOLSIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uPoolSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_UPOOLSIZE_OFFSET))(this);
	}

	::System::Void set_uDiscoveryBroadcastPort(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_UDISCOVERYBROADCASTPORT_OFFSET))(this, value);
	}

	::System::UInt16 get_uDiscoveryBroadcastPort()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_UDISCOVERYBROADCASTPORT_OFFSET))(this);
	}

	::System::Void set_uCommandPort(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_UCOMMANDPORT_OFFSET))(this, value);
	}

	::System::UInt16 get_uCommandPort()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_UCOMMANDPORT_OFFSET))(this);
	}

	::System::Void set_uNotificationPort(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_UNOTIFICATIONPORT_OFFSET))(this, value);
	}

	::System::UInt16 get_uNotificationPort()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_UNOTIFICATIONPORT_OFFSET))(this);
	}

	::System::Void set_commSystem(::AkCommunicationSettings_AkCommSystem value)
	{
		return ((::System::Void(*)(::PVOID, ::AkCommunicationSettings_AkCommSystem))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_COMMSYSTEM_OFFSET))(this, value);
	}

	::AkCommunicationSettings_AkCommSystem get_commSystem()
	{
		return ((::AkCommunicationSettings_AkCommSystem(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_COMMSYSTEM_OFFSET))(this);
	}

	::System::Void set_bInitSystemLib(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_BINITSYSTEMLIB_OFFSET))(this, value);
	}

	::System::Boolean get_bInitSystemLib()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_BINITSYSTEMLIB_OFFSET))(this);
	}

	::System::Void set_szAppNetworkName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_SET_SZAPPNETWORKNAME_OFFSET))(this, value);
	}

	::System::String* get_szAppNetworkName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMUNICATIONSETTINGS_GET_SZAPPNETWORKNAME_OFFSET))(this);
	}
};
