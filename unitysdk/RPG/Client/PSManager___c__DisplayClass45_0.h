#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D41D5D948382242;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1AA40)
#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS45_0__GETPSSESSIONDATAWITHSESSIONID_B__0_OFFSET UNITYSDK_OFFSET(0xAC1B4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PSManager___c__DisplayClass45_0_TypeDefinitionIndex = 61457;

	class PSManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_7D41D5D948382242*>* callback; // 0x10
		::System::String* sessionId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetPSSessionDataWithSessionID_b__0(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS45_0__GETPSSESSIONDATAWITHSESSIONID_B__0_OFFSET))(this, responseString);
		}
	};
}
