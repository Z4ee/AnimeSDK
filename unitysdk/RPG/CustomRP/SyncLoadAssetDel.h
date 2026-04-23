#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define RPG_CUSTOMRP_SYNCLOADASSETDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x181815D0)
#define RPG_CUSTOMRP_SYNCLOADASSETDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18181640)
#define RPG_CUSTOMRP_SYNCLOADASSETDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x18180F90)
#define RPG_CUSTOMRP_SYNCLOADASSETDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18180F70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SyncLoadAssetDel_TypeDefinitionIndex = 35263;

	class SyncLoadAssetDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SYNCLOADASSETDEL__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Object* Invoke(::System::String* assetShortName, ::System::Type* assetType, ::System::Boolean cancelOptOnFail)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SYNCLOADASSETDEL_INVOKE_OFFSET))(this, assetShortName, assetType, cancelOptOnFail);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* assetShortName, ::System::Type* assetType, ::System::Boolean cancelOptOnFail, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SYNCLOADASSETDEL_BEGININVOKE_OFFSET))(this, assetShortName, assetType, cancelOptOnFail, callback, object);
		}

		::UnityEngine::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SYNCLOADASSETDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
