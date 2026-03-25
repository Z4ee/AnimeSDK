#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_334;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x93C1E00)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x93C1E40)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_INVOKE_OFFSET UNITYSDK_OFFSET(0x93C0840)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x93C1DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance_ActionReplayHook_TypeDefinitionIndex = 48950;

	class ChimeraGameInstance_ActionReplayHook : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_0_16E4307DCC419505_334* current, ::Class_0_16E4307DCC419505_334* next)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_334*, ::Class_0_16E4307DCC419505_334*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_INVOKE_OFFSET))(this, current, next);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_334* current, ::Class_0_16E4307DCC419505_334* next, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_334*, ::Class_0_16E4307DCC419505_334*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_BEGININVOKE_OFFSET))(this, current, next, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
