#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class ReadMessageThread; }
namespace Hdg { class rdtTcpMessage; }

#define HDG_READMESSAGETHREAD___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA118F30)
#define HDG_READMESSAGETHREAD___C__DISPLAYCLASS15_0__ONREADING_B__0_OFFSET UNITYSDK_OFFSET(0xA118F50)

namespace Hdg
{
	inline static constexpr unsigned int ReadMessageThread___c__DisplayClass15_0_TypeDefinitionIndex = 44293;

	class ReadMessageThread___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Hdg::ReadMessageThread* __4__this; // 0x10
		::Hdg::rdtTcpMessage* message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_READMESSAGETHREAD___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnReading_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_READMESSAGETHREAD___C__DISPLAYCLASS15_0__ONREADING_B__0_OFFSET))(this);
		}
	};
}
