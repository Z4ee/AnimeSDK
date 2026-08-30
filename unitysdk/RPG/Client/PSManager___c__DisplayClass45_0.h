#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CEBEAE10BD13F6B;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDA1DE50)
#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS45_0__GETPSSESSIONDATAWITHSESSIONID_B__0_OFFSET UNITYSDK_OFFSET(0xDA1E9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PSManager___c__DisplayClass45_0_TypeDefinitionIndex = 66741;

	class PSManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::String* sessionId; // 0x10
		::System::Action_1<::Class_1_2CEBEAE10BD13F6B*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetPSSessionDataWithSessionID_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS45_0__GETPSSESSIONDATAWITHSESSIONID_B__0_OFFSET))(this, a1);
		}
	};
}
