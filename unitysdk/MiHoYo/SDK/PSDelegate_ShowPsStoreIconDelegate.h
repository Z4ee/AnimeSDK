#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_SHOWPSSTOREICONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BDE5A90)
#define MIHOYO_SDK_PSDELEGATE_SHOWPSSTOREICONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BDE5AC0)
#define MIHOYO_SDK_PSDELEGATE_SHOWPSSTOREICONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BDE5570)
#define MIHOYO_SDK_PSDELEGATE_SHOWPSSTOREICONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE5550)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_ShowPsStoreIconDelegate_TypeDefinitionIndex = 19850;

	class PSDelegate_ShowPsStoreIconDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_SHOWPSSTOREICONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_SHOWPSSTOREICONDELEGATE_INVOKE_OFFSET))(this, type);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* type, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_SHOWPSSTOREICONDELEGATE_BEGININVOKE_OFFSET))(this, type, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_SHOWPSSTOREICONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
