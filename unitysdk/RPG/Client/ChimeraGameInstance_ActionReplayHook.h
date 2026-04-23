#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_342;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA02F9E0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA02FA20)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA02E400)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0xA02F9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance_ActionReplayHook_TypeDefinitionIndex = 55742;

	class ChimeraGameInstance_ActionReplayHook : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_0_16E4307DCC419505_342* current, ::Class_0_16E4307DCC419505_342* next)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_342*, ::Class_0_16E4307DCC419505_342*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_INVOKE_OFFSET))(this, current, next);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_342* current, ::Class_0_16E4307DCC419505_342* next, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_342*, ::Class_0_16E4307DCC419505_342*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_BEGININVOKE_OFFSET))(this, current, next, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
