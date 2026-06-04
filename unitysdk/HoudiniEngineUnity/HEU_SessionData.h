#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Session.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_SessionType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ThriftSharedMemoryBufferType.h"
#include "unitysdk/HoudiniEngineUnity/SessionConnectionState.h"
#include "unitysdk/HoudiniEngineUnity/SessionMode.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_SessionSyncData; }
namespace System { class String; }
namespace System { class Type; }

#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GETORCREATESESSIONSYNC_OFFSET UNITYSDK_OFFSET(0x17F53640)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GETSESSIONSYNC_OFFSET UNITYSDK_OFFSET(0x17F53870)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x17F53A90)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x17F53930)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISSESSIONSYNC_OFFSET UNITYSDK_OFFSET(0x17F52260)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISVALIDSESSIONID_OFFSET UNITYSDK_OFFSET(0x17F53950)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PIPENAME_OFFSET UNITYSDK_OFFSET(0x17F53960)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PORT_OFFSET UNITYSDK_OFFSET(0x17F53980)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x17F538F0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONCLASSTYPE_OFFSET UNITYSDK_OFFSET(0x17F53A00)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x17F53890)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x17F53910)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SHAREDMEMORYBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x17F539E0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SHAREDMEMORYBUFFERTYPE_OFFSET UNITYSDK_OFFSET(0x17F539C0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SHAREDMEMORYNAME_OFFSET UNITYSDK_OFFSET(0x17F539A0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISCONNECTIONMODE_OFFSET UNITYSDK_OFFSET(0x17F53AB0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISSESSIONMODE_OFFSET UNITYSDK_OFFSET(0x17F53AD0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SETSESSIONSYNC_OFFSET UNITYSDK_OFFSET(0x17F53880)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_ISDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x17F53AA0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x17F53940)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PIPENAME_OFFSET UNITYSDK_OFFSET(0x17F53970)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PORT_OFFSET UNITYSDK_OFFSET(0x17F53990)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x17F53900)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONCLASSTYPE_OFFSET UNITYSDK_OFFSET(0x17F53A50)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x17F529B0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x17F53920)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SHAREDMEMORYBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x17F539F0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SHAREDMEMORYBUFFERTYPE_OFFSET UNITYSDK_OFFSET(0x17F539D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SHAREDMEMORYNAME_OFFSET UNITYSDK_OFFSET(0x17F539B0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_THISCONNECTIONMODE_OFFSET UNITYSDK_OFFSET(0x17F53AC0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_THISSESSIONMODE_OFFSET UNITYSDK_OFFSET(0x17F53AE0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F53B00)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F53AF0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionData_TypeDefinitionIndex = 37621;

	class HEU_SessionData : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_INVALID_SESSION_ID()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(HEU_SessionData_TypeDefinitionIndex)->GetStaticField(0x4340);
		}
		::HoudiniEngineUnity::HAPI_Session _HAPISession; // 0x10
		::System::Int32 _serverProcessID; // 0x20
		::System::Boolean _initialized; // 0x24
		::System::String* _pipeName; // 0x28
		::System::Int32 _port; // 0x30
		::System::String* _sharedMemoryName; // 0x38
		::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType _sharedMemoryBufferType; // 0x40
		::System::Int32 _sharedMemoryBufferSize; // 0x44
		::System::String* _sessionClassType; // 0x48
		::System::Boolean _isDefaultSession; // 0x50
		::HoudiniEngineUnity::HEU_SessionSyncData* _sessionSync; // 0x58
		::HoudiniEngineUnity::SessionConnectionState _connectionState; // 0x60
		::HoudiniEngineUnity::SessionMode _sessionMode; // 0x64

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

		::System::Void SetSessionSync(::HoudiniEngineUnity::HEU_SessionSyncData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionSyncData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SETSESSIONSYNC_OFFSET))(this, a1);
		}

		::System::Int64 get_SessionID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionID(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONID_OFFSET))(this, a1);
		}

		::System::Int32 get_ProcessID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PROCESSID_OFFSET))(this);
		}

		::System::Void set_ProcessID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PROCESSID_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HAPI_SessionType get_SessionType()
		{
			return ((::HoudiniEngineUnity::HAPI_SessionType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONTYPE_OFFSET))(this);
		}

		::System::Void set_SessionType(::HoudiniEngineUnity::HAPI_SessionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_SessionType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_IsInitialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_ISINITIALIZED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValidSessionID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISVALIDSESSIONID_OFFSET))(this);
		}

		::System::String* get_PipeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PIPENAME_OFFSET))(this);
		}

		::System::Void set_PipeName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PIPENAME_OFFSET))(this, a1);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_PORT_OFFSET))(this, a1);
		}

		::System::String* get_SharedMemoryName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SHAREDMEMORYNAME_OFFSET))(this);
		}

		::System::Void set_SharedMemoryName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SHAREDMEMORYNAME_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType get_SharedMemoryBufferType()
		{
			return ((::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SHAREDMEMORYBUFFERTYPE_OFFSET))(this);
		}

		::System::Void set_SharedMemoryBufferType(::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SHAREDMEMORYBUFFERTYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_SharedMemoryBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SHAREDMEMORYBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_SharedMemoryBufferSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SHAREDMEMORYBUFFERSIZE_OFFSET))(this, a1);
		}

		::System::Type* get_SessionClassType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONCLASSTYPE_OFFSET))(this);
		}

		::System::Void set_SessionClassType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_SESSIONCLASSTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDefaultSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISDEFAULTSESSION_OFFSET))(this);
		}

		::System::Void set_IsDefaultSession(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_ISDEFAULTSESSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSessionSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISSESSIONSYNC_OFFSET))(this);
		}

		::HoudiniEngineUnity::SessionConnectionState get_ThisConnectionMode()
		{
			return ((::HoudiniEngineUnity::SessionConnectionState(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISCONNECTIONMODE_OFFSET))(this);
		}

		::System::Void set_ThisConnectionMode(::HoudiniEngineUnity::SessionConnectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::SessionConnectionState))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_THISCONNECTIONMODE_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::SessionMode get_ThisSessionMode()
		{
			return ((::HoudiniEngineUnity::SessionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISSESSIONMODE_OFFSET))(this);
		}

		::System::Void set_ThisSessionMode(::HoudiniEngineUnity::SessionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::SessionMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_SET_THISSESSIONMODE_OFFSET))(this, a1);
		}
	};
}
