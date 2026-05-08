#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_1_F84D85BE7187BFCA;

#define MOLEMOLE_TELEPORTMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x15BB6E90)
#define MOLEMOLE_TELEPORTMESSAGE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x15BB6E30)
#define MOLEMOLE_TELEPORTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB6E10)
#define MOLEMOLE_TELEPORTMESSAGE___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x15BB6EF0)

namespace MoleMole
{
	inline static constexpr unsigned int TeleportMessage_TypeDefinitionIndex = 47251;

	class TeleportMessage : public ::MoleMole::LogicMessageBase
	{
	public:
		::Class_1_F84D85BE7187BFCA* _teleport; // 0x20

		::System::Void _ctor(::Class_1_F84D85BE7187BFCA* teleport)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F84D85BE7187BFCA*))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE__CTOR_OFFSET))(this, teleport);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
