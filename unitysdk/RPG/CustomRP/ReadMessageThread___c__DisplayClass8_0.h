#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IRPMessage; }
namespace RPG::CustomRP { class ReadMessageThread; }

#define RPG_CUSTOMRP_READMESSAGETHREAD___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E5B20)
#define RPG_CUSTOMRP_READMESSAGETHREAD___C__DISPLAYCLASS8_0___READMSG_B__0_OFFSET UNITYSDK_OFFSET(0x1C6E6400)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReadMessageThread___c__DisplayClass8_0_TypeDefinitionIndex = 37220;

	class ReadMessageThread___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::CustomRP::ReadMessageThread* __4__this; // 0x10
		::RPG::CustomRP::IRPMessage* message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __ReadMsg_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD___C__DISPLAYCLASS8_0___READMSG_B__0_OFFSET))(this);
		}
	};
}
