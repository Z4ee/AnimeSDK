#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class GeetestView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C8F0B0)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C8F0E0)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C8EBB0)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8EBA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_RegisterGeetestViewDelegate_TypeDefinitionIndex = 18709;

	class WebDelegate_RegisterGeetestViewDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::GeetestView* view)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_INVOKE_OFFSET))(this, view);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::GeetestView* view, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::GeetestView*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_BEGININVOKE_OFFSET))(this, view, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
