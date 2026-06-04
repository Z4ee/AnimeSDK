#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLEDELEGATE_LEAVESESSIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18308FA0)
#define MIHOYO_SDK_CONSOLEDELEGATE_LEAVESESSIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18308FD0)
#define MIHOYO_SDK_CONSOLEDELEGATE_LEAVESESSIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18308F90)
#define MIHOYO_SDK_CONSOLEDELEGATE_LEAVESESSIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18308F20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_LeaveSessionDelegate_TypeDefinitionIndex = 7582;

	class ConsoleDelegate_LeaveSessionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_LEAVESESSIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_LEAVESESSIONDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::System::String*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_LEAVESESSIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_LEAVESESSIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
