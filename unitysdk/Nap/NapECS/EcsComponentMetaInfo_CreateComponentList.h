#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Nap::NapECS { class IEcsComponentList; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATECOMPONENTLIST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C83D630)
#define NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATECOMPONENTLIST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C83D660)
#define NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATECOMPONENTLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C83D3A0)
#define NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATECOMPONENTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C83D380)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentMetaInfo_CreateComponentList_TypeDefinitionIndex = 38039;

	class EcsComponentMetaInfo_CreateComponentList : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATECOMPONENTLIST__CTOR_OFFSET))(this, object, method);
		}

		::Nap::NapECS::IEcsComponentList* Invoke()
		{
			return ((::Nap::NapECS::IEcsComponentList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATECOMPONENTLIST_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATECOMPONENTLIST_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::Nap::NapECS::IEcsComponentList* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Nap::NapECS::IEcsComponentList*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETAINFO_CREATECOMPONENTLIST_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
