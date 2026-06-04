#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183091A0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183091E0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18306EE0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18309120)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_OpenURLDelegate_TypeDefinitionIndex = 7566;

	class ConsoleDelegate_OpenURLDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Action* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
