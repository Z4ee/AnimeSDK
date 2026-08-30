#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_RSPHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16A1DF60)
#define RPG_CLIENT_RSPHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16A1DFD0)
#define RPG_CLIENT_RSPHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A1DF50)
#define RPG_CLIENT_RSPHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1DEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RspHandler_TypeDefinitionIndex = 59430;

	class RspHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_RSPHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RSPHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt16 a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt16, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RSPHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RSPHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
