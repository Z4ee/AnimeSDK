#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class String; }

#define MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x173AB300)
#define MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x173AB2A0)
#define MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x173AB270)
#define MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x173AB4B0)

namespace MoleMole
{
	inline static constexpr unsigned int TowerDefenseUnlockMessageDisplayMessage_TypeDefinitionIndex = 76033;

	class TowerDefenseUnlockMessageDisplayMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* key; // 0x28

		::System::Void _ctor(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE__CTOR_OFFSET))(this, key);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
