#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_DLL_ONDESTROYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1830D570)
#define MIHOYO_SDK_DLL_ONDESTROYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1830D5A0)
#define MIHOYO_SDK_DLL_ONDESTROYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1830D560)
#define MIHOYO_SDK_DLL_ONDESTROYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1830D4F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dll_OnDestroyDelegate_TypeDefinitionIndex = 7889;

	class Dll_OnDestroyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ONDESTROYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ONDESTROYDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ONDESTROYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ONDESTROYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
