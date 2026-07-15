#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17120430)
#define MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17120480)
#define MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17120420)
#define MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x171203B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_SetAPMAgeGateDelegate_TypeDefinitionIndex = 7763;

	class SDKDelegate_SetAPMAgeGateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SETAPMAGEGATEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
