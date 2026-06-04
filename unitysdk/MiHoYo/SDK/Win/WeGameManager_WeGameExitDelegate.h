#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x182DB570)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x182DB5C0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x182DB350)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x182DB500)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager_WeGameExitDelegate_TypeDefinitionIndex = 9134;

	class WeGameManager_WeGameExitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
