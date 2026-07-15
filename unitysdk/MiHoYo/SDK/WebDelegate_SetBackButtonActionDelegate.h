#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15C25F50)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15C25F90)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15C22DF0)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C25E60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetBackButtonActionDelegate_TypeDefinitionIndex = 7786;

	class WebDelegate_SetBackButtonActionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Func_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Func_1<::System::Boolean>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Func_1<::System::Boolean>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONACTIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
