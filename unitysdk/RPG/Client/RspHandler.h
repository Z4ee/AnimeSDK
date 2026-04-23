#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_RSPHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB131960)
#define RPG_CLIENT_RSPHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB1319D0)
#define RPG_CLIENT_RSPHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xB131610)
#define RPG_CLIENT_RSPHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB12BFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RspHandler_TypeDefinitionIndex = 54685;

	class RspHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_RSPHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RSPHANDLER_INVOKE_OFFSET))(this, cmd, rsp);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt16 cmd, ::System::Object* rsp, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt16, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RSPHANDLER_BEGININVOKE_OFFSET))(this, cmd, rsp, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RSPHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
