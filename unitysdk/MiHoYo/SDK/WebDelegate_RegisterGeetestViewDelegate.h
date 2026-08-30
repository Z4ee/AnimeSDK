#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class GeetestView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BB15B80)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BB15BB0)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BB15B70)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB15A80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_RegisterGeetestViewDelegate_TypeDefinitionIndex = 7797;

	class WebDelegate_RegisterGeetestViewDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::GeetestView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::GeetestView* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::GeetestView*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERGEETESTVIEWDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
