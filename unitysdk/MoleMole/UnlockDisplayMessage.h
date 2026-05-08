#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_2_208CC9941471731A_340;

#define MOLEMOLE_UNLOCKDISPLAYMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xF3AC2E0)
#define MOLEMOLE_UNLOCKDISPLAYMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xF3AC320)
#define MOLEMOLE_UNLOCKDISPLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xF3AC2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UnlockDisplayMessage_TypeDefinitionIndex = 43983;

	class UnlockDisplayMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_2_208CC9941471731A_340* unlockConfig; // 0x28

		::System::Void _ctor(::Class_2_208CC9941471731A_340* unlockConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_340*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKDISPLAYMESSAGE__CTOR_OFFSET))(this, unlockConfig);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKDISPLAYMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKDISPLAYMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
