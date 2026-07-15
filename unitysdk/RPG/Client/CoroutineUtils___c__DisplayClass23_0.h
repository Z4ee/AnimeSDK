#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ICoroutineGroupController; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_COROUTINEUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA1EE0)
#define RPG_CLIENT_COROUTINEUTILS___C__DISPLAYCLASS23_0__INVOKEAFTERSECONDSPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x1ACA22E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___c__DisplayClass23_0_TypeDefinitionIndex = 33797;

	class CoroutineUtils___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::ICoroutineGroupController* ctrl; // 0x10
		::System::Single seconds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _InvokeAfterSecondsPromise_b__0(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___C__DISPLAYCLASS23_0__INVOKEAFTERSECONDSPROMISE_B__0_OFFSET))(this, a1, a2);
		}
	};
}
