#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Session.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_SessionType.h"
#include "unitysdk/HoudiniEngineUnity/SessionConnectionState.h"
#include "unitysdk/HoudiniEngineUnity/SessionMode.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_SessionSyncData; }
namespace System { class String; }
namespace System { class Type; }

#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GETORCREATESESSIONSYNC_OFFSET UNITYSDK_OFFSET(0x848CDB0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GETSESSIONSYNC_OFFSET UNITYSDK_OFFSET(0x848CFE0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x848D1A0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x848D0A0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISSESSIONSYNC_OFFSET UNITYSDK_OFFSET(0x848B7C0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISVALIDSESSIONID_OFFSET UNITYSDK_OFFSET(0x848D0C0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PIPENAME_OFFSET UNITYSDK_OFFSET(0x848D0D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PORT_OFFSET UNITYSDK_OFFSET(0x848D0F0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x848D060)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONCLASSTYPE_OFFSET UNITYSDK_OFFSET(0x848D110)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x848D000)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x848D080)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISCONNECTIONMODE_OFFSET UNITYSDK_OFFSET(0x848D1C0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISSESSIONMODE_OFFSET UNITYSDK_OFFSET(0x848D1E0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SETSESSIONSYNC_OFFSET UNITYSDK_OFFSET(0x848CFF0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_ISDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x848D1B0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x848D0B0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PIPENAME_OFFSET UNITYSDK_OFFSET(0x848D0E0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PORT_OFFSET UNITYSDK_OFFSET(0x848D100)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x848D070)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONCLASSTYPE_OFFSET UNITYSDK_OFFSET(0x848D160)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x848C240)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x848D090)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_THISCONNECTIONMODE_OFFSET UNITYSDK_OFFSET(0x848D1D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_THISSESSIONMODE_OFFSET UNITYSDK_OFFSET(0x848D1F0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x848D210)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x848D200)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionData_TypeDefinitionIndex = 37769;

	class HEU_SessionData : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_INVALID_SESSION_ID()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(HEU_SessionData_TypeDefinitionIndex)->GetStaticField(0x20E0);
		}
		::HoudiniEngineUnity::HAPI_Session _HAPISession; // 0x10
		::System::Int32 _serverProcessID; // 0x20
		::System::Boolean _initialized; // 0x24
		::System::String* _pipeName; // 0x28
		::System::Int32 _port; // 0x30
		::System::String* _sessionClassType; // 0x38
		::System::Boolean _isDefaultSession; // 0x40
		::HoudiniEngineUnity::HEU_SessionSyncData* _sessionSync; // 0x48
		::HoudiniEngineUnity::SessionConnectionState _connectionState; // 0x50
		::HoudiniEngineUnity::SessionMode _sessionMode; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA__CCTOR_OFFSET))();
		}

		::HoudiniEngineUnity::HEU_SessionSyncData* GetOrCreateSessionSync()
		{
			return ((::HoudiniEngineUnity::HEU_SessionSyncData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GETORCREATESESSIONSYNC_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionSyncData* GetSessionSync()
		{
			return ((::HoudiniEngineUnity::HEU_SessionSyncData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GETSESSIONSYNC_OFFSET))(this);
		}

		::System::Void SetSessionSync(::HoudiniEngineUnity::HEU_SessionSyncData* syncData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionSyncData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SETSESSIONSYNC_OFFSET))(this, syncData);
		}

		::System::Int64 get_SessionID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionID(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONID_OFFSET))(this, value);
		}

		::System::Int32 get_ProcessID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PROCESSID_OFFSET))(this);
		}

		::System::Void set_ProcessID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PROCESSID_OFFSET))(this, value);
		}

		::HoudiniEngineUnity::HAPI_SessionType get_SessionType()
		{
			return ((::HoudiniEngineUnity::HAPI_SessionType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONTYPE_OFFSET))(this);
		}

		::System::Void set_SessionType(::HoudiniEngineUnity::HAPI_SessionType value)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_SessionType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_IsInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_ISINITIALIZED_OFFSET))(this, value);
		}

		::System::Boolean get_IsValidSessionID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISVALIDSESSIONID_OFFSET))(this);
		}

		::System::String* get_PipeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PIPENAME_OFFSET))(this);
		}

		::System::Void set_PipeName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PIPENAME_OFFSET))(this, value);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PORT_OFFSET))(this, value);
		}

		::System::Type* get_SessionClassType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONCLASSTYPE_OFFSET))(this);
		}

		::System::Void set_SessionClassType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONCLASSTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsDefaultSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISDEFAULTSESSION_OFFSET))(this);
		}

		::System::Void set_IsDefaultSession(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_ISDEFAULTSESSION_OFFSET))(this, value);
		}

		::System::Boolean get_IsSessionSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISSESSIONSYNC_OFFSET))(this);
		}

		::HoudiniEngineUnity::SessionConnectionState get_ThisConnectionMode()
		{
			return ((::HoudiniEngineUnity::SessionConnectionState(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISCONNECTIONMODE_OFFSET))(this);
		}

		::System::Void set_ThisConnectionMode(::HoudiniEngineUnity::SessionConnectionState value)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::SessionConnectionState))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_THISCONNECTIONMODE_OFFSET))(this, value);
		}

		::HoudiniEngineUnity::SessionMode get_ThisSessionMode()
		{
			return ((::HoudiniEngineUnity::SessionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISSESSIONMODE_OFFSET))(this);
		}

		::System::Void set_ThisSessionMode(::HoudiniEngineUnity::SessionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::SessionMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_THISSESSIONMODE_OFFSET))(this, value);
		}
	};
}
