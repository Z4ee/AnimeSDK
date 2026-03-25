#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15EA6630)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15EA6680)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15EA61D0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA6610)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager_WeGameExitDelegate_TypeDefinitionIndex = 8085;

	class WeGameManager_WeGameExitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_INVOKE_OFFSET))(this, code);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 code, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_BEGININVOKE_OFFSET))(this, code, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEEXITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
