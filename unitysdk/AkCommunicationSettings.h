#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommunicationSettings_AkCommSystem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKCOMMUNICATIONSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A5E0000)
#define AKCOMMUNICATIONSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5DFF10)
#define AKCOMMUNICATIONSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5DFF90)
#define AKCOMMUNICATIONSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5DFE00)
#define AKCOMMUNICATIONSETTINGS_GET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x1A5E0510)
#define AKCOMMUNICATIONSETTINGS_GET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1A5E0460)
#define AKCOMMUNICATIONSETTINGS_GET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x1A5E05C0)
#define AKCOMMUNICATIONSETTINGS_GET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x1A5E0300)
#define AKCOMMUNICATIONSETTINGS_GET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x1A5E0250)
#define AKCOMMUNICATIONSETTINGS_GET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x1A5E03B0)
#define AKCOMMUNICATIONSETTINGS_GET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1A5E01A0)
#define AKCOMMUNICATIONSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5DFE50)
#define AKCOMMUNICATIONSETTINGS_SET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x1A5DCA70)
#define AKCOMMUNICATIONSETTINGS_SET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1A5DCB30)
#define AKCOMMUNICATIONSETTINGS_SET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x1A5DCBF0)
#define AKCOMMUNICATIONSETTINGS_SET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x1A5DC8F0)
#define AKCOMMUNICATIONSETTINGS_SET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x1A5DC830)
#define AKCOMMUNICATIONSETTINGS_SET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x1A5DC9B0)
#define AKCOMMUNICATIONSETTINGS_SET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1A5DC770)
#define AKCOMMUNICATIONSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5D3BA0)
#define AKCOMMUNICATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5DFDF0)

inline static constexpr unsigned int AkCommunicationSettings_TypeDefinitionIndex = 40351;

class AkCommunicationSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

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
