#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }

#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8491A20)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8491A50)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x84914C0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x84914A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionManager_CreateSessionFromTypeDelegate_TypeDefinitionIndex = 37772;

	class HEU_SessionManager_CreateSessionFromTypeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::HoudiniEngineUnity::HEU_SessionBase* Invoke(::System::Type* type)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_INVOKE_OFFSET))(this, type);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* type, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_BEGININVOKE_OFFSET))(this, type, callback, object);
		}

		::HoudiniEngineUnity::HEU_SessionBase* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
