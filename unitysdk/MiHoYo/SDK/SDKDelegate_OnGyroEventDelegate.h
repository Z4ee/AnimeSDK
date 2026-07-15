#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/WeLing/SDK/GyroType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1711FEB0)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1711FF30)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1711FEA0)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1711FE30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnGyroEventDelegate_TypeDefinitionIndex = 7750;

	class SDKDelegate_OnGyroEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::WeLing::SDK::GyroType a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::WeLing::SDK::GyroType a1, ::Il2CppArray<::System::Single>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
