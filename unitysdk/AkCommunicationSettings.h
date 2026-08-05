#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommunicationSettings_AkCommSystem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKCOMMUNICATIONSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FBD73A0)
#define AKCOMMUNICATIONSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FBD7280)
#define AKCOMMUNICATIONSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FBD7330)
#define AKCOMMUNICATIONSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1FBD71C0)
#define AKCOMMUNICATIONSETTINGS_GET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x1FBD7B50)
#define AKCOMMUNICATIONSETTINGS_GET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1FBD7A50)
#define AKCOMMUNICATIONSETTINGS_GET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x1FBD7C70)
#define AKCOMMUNICATIONSETTINGS_GET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x1FBD7850)
#define AKCOMMUNICATIONSETTINGS_GET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x1FBD7750)
#define AKCOMMUNICATIONSETTINGS_GET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x1FBD7950)
#define AKCOMMUNICATIONSETTINGS_GET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1FBD7650)
#define AKCOMMUNICATIONSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1FBD71D0)
#define AKCOMMUNICATIONSETTINGS_SET_BINITSYSTEMLIB_OFFSET UNITYSDK_OFFSET(0x1FBD7AD0)
#define AKCOMMUNICATIONSETTINGS_SET_COMMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1FBD79D0)
#define AKCOMMUNICATIONSETTINGS_SET_SZAPPNETWORKNAME_OFFSET UNITYSDK_OFFSET(0x1FBD7BD0)
#define AKCOMMUNICATIONSETTINGS_SET_UCOMMANDPORT_OFFSET UNITYSDK_OFFSET(0x1FBD77D0)
#define AKCOMMUNICATIONSETTINGS_SET_UDISCOVERYBROADCASTPORT_OFFSET UNITYSDK_OFFSET(0x1FBD76D0)
#define AKCOMMUNICATIONSETTINGS_SET_UNOTIFICATIONPORT_OFFSET UNITYSDK_OFFSET(0x1FBD78D0)
#define AKCOMMUNICATIONSETTINGS_SET_UPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1FBD75D0)
#define AKCOMMUNICATIONSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBD7550)
#define AKCOMMUNICATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD71B0)

inline static constexpr unsigned int AkCommunicationSettings_TypeDefinitionIndex = 33658;

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
