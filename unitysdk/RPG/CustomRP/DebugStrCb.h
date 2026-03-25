#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CUSTOMRP_DEBUGSTRCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16A954C0)
#define RPG_CUSTOMRP_DEBUGSTRCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16A954F0)
#define RPG_CUSTOMRP_DEBUGSTRCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A94F70)
#define RPG_CUSTOMRP_DEBUGSTRCB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A94F50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugStrCb_TypeDefinitionIndex = 29363;

	class DebugStrCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRCB__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRCB_INVOKE_OFFSET))(this, str);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRCB_BEGININVOKE_OFFSET))(this, str, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRCB_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
