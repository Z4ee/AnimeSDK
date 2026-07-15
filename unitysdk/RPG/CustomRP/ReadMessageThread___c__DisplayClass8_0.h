#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IRPMessage; }
namespace RPG::CustomRP { class ReadMessageThread; }

#define RPG_CUSTOMRP_READMESSAGETHREAD___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C255B0)
#define RPG_CUSTOMRP_READMESSAGETHREAD___C__DISPLAYCLASS8_0___READMSG_B__0_OFFSET UNITYSDK_OFFSET(0x16C25E90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReadMessageThread___c__DisplayClass8_0_TypeDefinitionIndex = 36361;

	class ReadMessageThread___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::CustomRP::IRPMessage* message; // 0x10
		::RPG::CustomRP::ReadMessageThread* __4__this; // 0x18

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
