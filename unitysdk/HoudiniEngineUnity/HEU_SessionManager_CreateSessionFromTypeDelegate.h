#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }

#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B14E260)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B14E290)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B14E250)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B14E160)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionManager_CreateSessionFromTypeDelegate_TypeDefinitionIndex = 39291;

	class HEU_SessionManager_CreateSessionFromTypeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::HEU_SessionBase* Invoke(::System::Type* a1)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::HoudiniEngineUnity::HEU_SessionBase* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
