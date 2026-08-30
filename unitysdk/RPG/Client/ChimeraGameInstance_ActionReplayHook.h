#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_414;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCC00B80)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCC00BC0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_INVOKE_OFFSET UNITYSDK_OFFSET(0xCBFFBB0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0xCC00A90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance_ActionReplayHook_TypeDefinitionIndex = 60554;

	class ChimeraGameInstance_ActionReplayHook : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Class_0_16E4307DCC419505_414* a1, ::Class_0_16E4307DCC419505_414* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_414*, ::Class_0_16E4307DCC419505_414*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_414* a1, ::Class_0_16E4307DCC419505_414* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_414*, ::Class_0_16E4307DCC419505_414*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ACTIONREPLAYHOOK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
