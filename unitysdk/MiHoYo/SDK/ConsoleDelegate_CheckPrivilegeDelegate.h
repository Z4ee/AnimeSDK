#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1750C3F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1750C420)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1750BE90)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1750BE70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CheckPrivilegeDelegate_TypeDefinitionIndex = 6670;

	class ConsoleDelegate_CheckPrivilegeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* strPrivilege)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_INVOKE_OFFSET))(this, strPrivilege);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strPrivilege, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_BEGININVOKE_OFFSET))(this, strPrivilege, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
