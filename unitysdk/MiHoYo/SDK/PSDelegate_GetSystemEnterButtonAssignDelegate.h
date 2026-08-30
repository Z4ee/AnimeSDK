#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_GETSYSTEMENTERBUTTONASSIGNDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA75370)
#define MIHOYO_SDK_PSDELEGATE_GETSYSTEMENTERBUTTONASSIGNDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA753A0)
#define MIHOYO_SDK_PSDELEGATE_GETSYSTEMENTERBUTTONASSIGNDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA718C0)
#define MIHOYO_SDK_PSDELEGATE_GETSYSTEMENTERBUTTONASSIGNDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA75300)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_GetSystemEnterButtonAssignDelegate_TypeDefinitionIndex = 7677;

	class PSDelegate_GetSystemEnterButtonAssignDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETSYSTEMENTERBUTTONASSIGNDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETSYSTEMENTERBUTTONASSIGNDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETSYSTEMENTERBUTTONASSIGNDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETSYSTEMENTERBUTTONASSIGNDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
