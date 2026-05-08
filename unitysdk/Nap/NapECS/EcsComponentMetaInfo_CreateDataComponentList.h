#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Nap::NapECS { class IPatchedList; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATEDATACOMPONENTLIST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x192D0340)
#define NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATEDATACOMPONENTLIST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x192D0370)
#define NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATEDATACOMPONENTLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x192D00A0)
#define NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATEDATACOMPONENTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x192D0090)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentMetaInfo_CreateDataComponentList_TypeDefinitionIndex = 35729;

	class EcsComponentMetaInfo_CreateDataComponentList : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATEDATACOMPONENTLIST__CTOR_OFFSET))(this, object, method);
		}

		::Nap::NapECS::IPatchedList* Invoke()
		{
			return ((::Nap::NapECS::IPatchedList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATEDATACOMPONENTLIST_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATEDATACOMPONENTLIST_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::Nap::NapECS::IPatchedList* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Nap::NapECS::IPatchedList*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATEDATACOMPONENTLIST_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
