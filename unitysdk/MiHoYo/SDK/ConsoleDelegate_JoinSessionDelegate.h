#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLEDELEGATE_JOINSESSIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F9A50)
#define MIHOYO_SDK_CONSOLEDELEGATE_JOINSESSIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F9A90)
#define MIHOYO_SDK_CONSOLEDELEGATE_JOINSESSIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F9A40)
#define MIHOYO_SDK_CONSOLEDELEGATE_JOINSESSIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F99C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_JoinSessionDelegate_TypeDefinitionIndex = 7577;

	class ConsoleDelegate_JoinSessionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_JOINSESSIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_JOINSESSIONDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Action_1<::System::String*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_JOINSESSIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_JOINSESSIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
