#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_CLEARBGIMGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15C241F0)
#define MIHOYO_SDK_WEBDELEGATE_CLEARBGIMGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15C24220)
#define MIHOYO_SDK_WEBDELEGATE_CLEARBGIMGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15C22BF0)
#define MIHOYO_SDK_WEBDELEGATE_CLEARBGIMGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C24100)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_ClearBGImgDelegate_TypeDefinitionIndex = 7801;

	class WebDelegate_ClearBGImgDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLEARBGIMGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLEARBGIMGDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLEARBGIMGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLEARBGIMGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
