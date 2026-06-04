#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184662A0)
#define MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18466330)
#define MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18466280)
#define MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18466210)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetGameVolumeDelegate_TypeDefinitionIndex = 7798;

	class WebDelegate_SetGameVolumeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
