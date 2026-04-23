#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1AC60)
#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS46_0__JOINSESSION_B__0_OFFSET UNITYSDK_OFFSET(0xAC1B770)

namespace RPG::Client
{
	inline static constexpr unsigned int PSManager___c__DisplayClass46_0_TypeDefinitionIndex = 61458;

	class PSManager___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* action; // 0x10
		::System::String* sessionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _JoinSession_b__0(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS46_0__JOINSESSION_B__0_OFFSET))(this, responseString);
		}
	};
}
