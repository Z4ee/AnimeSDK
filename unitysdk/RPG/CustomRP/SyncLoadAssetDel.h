#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define RPG_CUSTOMRP_SYNCLOADASSETDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EE59460)
#define RPG_CUSTOMRP_SYNCLOADASSETDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EE594D0)
#define RPG_CUSTOMRP_SYNCLOADASSETDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EE59440)
#define RPG_CUSTOMRP_SYNCLOADASSETDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE593C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SyncLoadAssetDel_TypeDefinitionIndex = 37204;

	class SyncLoadAssetDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SYNCLOADASSETDEL__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* Invoke(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SYNCLOADASSETDEL_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Type* a2, ::System::Boolean a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SYNCLOADASSETDEL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SYNCLOADASSETDEL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
