#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PopImageModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_POPIMAGE_CLICKIMAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183FA2F0)
#define MIHOYO_SDK_POPIMAGE_CLICKIMAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183FA320)
#define MIHOYO_SDK_POPIMAGE_CLICKIMAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x183F9740)
#define MIHOYO_SDK_POPIMAGE_CLICKIMAGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183FA200)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopImage_ClickImageDelegate_TypeDefinitionIndex = 8197;

	class PopImage_ClickImageDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLICKIMAGEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLICKIMAGEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PopImageModel* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLICKIMAGEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLICKIMAGEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
