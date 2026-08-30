#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D0C30)
#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS47_0__LEAVESESSION_B__0_OFFSET UNITYSDK_OFFSET(0x1C4D1A70)

namespace RPG::Client
{
	inline static constexpr unsigned int PSManager___c__DisplayClass47_0_TypeDefinitionIndex = 66743;

	class PSManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _LeaveSession_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS47_0__LEAVESESSION_B__0_OFFSET))(this, a1);
		}
	};
}
