#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_MESSAGEPUMPSHOWLEFT_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x170DC480)
#define MOLEMOLE_MESSAGEPUMPSHOWLEFT_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x170DC490)
#define MOLEMOLE_MESSAGEPUMPSHOWLEFT_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x170DC4D0)
#define MOLEMOLE_MESSAGEPUMPSHOWLEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x170DC4A0)

namespace MoleMole
{
	inline static constexpr unsigned int MessagePumpShowLeft_TypeDefinitionIndex = 52702;

	class MessagePumpShowLeft : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWLEFT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWLEFT_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWLEFT_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWLEFT_ONPROCESS_OFFSET))(this);
		}
	};
}
