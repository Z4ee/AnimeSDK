#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_SyncedEventData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B454E00)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B454E30)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B454DF0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B454D00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGSession_OnWorkItemLoadResultsDelegate_TypeDefinitionIndex = 39247;

	class HEU_PDGSession_OnWorkItemLoadResultsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTSDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_SyncedEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SyncedEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTSDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_SyncedEventData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HoudiniEngineUnity::HEU_SyncedEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
