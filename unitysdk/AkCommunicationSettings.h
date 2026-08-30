#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommunicationSettings_AkCommSystem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKCOMMUNICATIONSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EEC2150)
#define AKCOMMUNICATIONSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEC1F60)
#define AKCOMMUNICATIONSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EEC2080)
#define AKCOMMUNICATIONSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEC1EB0)
#define AKCOMMUNICATIONSETTINGS_GET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x1EEC26A0)
#define AKCOMMUNICATIONSETTINGS_GET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1EEC25F0)
#define AKCOMMUNICATIONSETTINGS_GET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x1EEC2750)
#define AKCOMMUNICATIONSETTINGS_GET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x1EEC2490)
#define AKCOMMUNICATIONSETTINGS_GET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x1EEC23E0)
#define AKCOMMUNICATIONSETTINGS_GET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x1EEC2540)
#define AKCOMMUNICATIONSETTINGS_GET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1EEC2330)
#define AKCOMMUNICATIONSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEC1F00)
#define AKCOMMUNICATIONSETTINGS_SET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x1EEBE540)
#define AKCOMMUNICATIONSETTINGS_SET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1EEBE600)
#define AKCOMMUNICATIONSETTINGS_SET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x1EEBE6C0)
#define AKCOMMUNICATIONSETTINGS_SET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x1EEBE3C0)
#define AKCOMMUNICATIONSETTINGS_SET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x1EEBE300)
#define AKCOMMUNICATIONSETTINGS_SET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x1EEBE480)
#define AKCOMMUNICATIONSETTINGS_SET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1EEBE240)
#define AKCOMMUNICATIONSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEB5AE0)
#define AKCOMMUNICATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC1EA0)

inline static constexpr unsigned int AkCommunicationSettings_TypeDefinitionIndex = 43604;

class AkCommunicationSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

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
