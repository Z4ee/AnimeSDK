#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PopImageModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_POPIMAGE_CLOSEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1761AA90)
#define MIHOYO_SDK_POPIMAGE_CLOSEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1761AAC0)
#define MIHOYO_SDK_POPIMAGE_CLOSEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17619450)
#define MIHOYO_SDK_POPIMAGE_CLOSEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1761AA70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopImage_CloseDelegate_TypeDefinitionIndex = 7293;

	class PopImage_CloseDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLOSEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PopImageModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLOSEDELEGATE_INVOKE_OFFSET))(this, model);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PopImageModel* model, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLOSEDELEGATE_BEGININVOKE_OFFSET))(this, model, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLOSEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
