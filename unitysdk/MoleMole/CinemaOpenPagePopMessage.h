#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_D7AB5C0D818FEEEA;

#define MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12D171E0)
#define MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12D17200)
#define MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D171F0)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaOpenPagePopMessage_TypeDefinitionIndex = 49902;

	class CinemaOpenPagePopMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_D7AB5C0D818FEEEA* processHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
