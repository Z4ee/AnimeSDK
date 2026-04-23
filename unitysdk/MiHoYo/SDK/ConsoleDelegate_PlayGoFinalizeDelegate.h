#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOFINALIZEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175169F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOFINALIZEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17516A20)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOFINALIZEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17516740)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOFINALIZEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17516720)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoFinalizeDelegate_TypeDefinitionIndex = 6713;

	class ConsoleDelegate_PlayGoFinalizeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOFINALIZEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOFINALIZEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOFINALIZEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOFINALIZEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
