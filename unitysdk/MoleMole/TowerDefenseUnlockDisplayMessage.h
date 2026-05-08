#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/TowerDefenseUnlockDisplayMessage_TowerDefenseUnlockType.h"

#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12FD25F0)
#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12FD2690)
#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x12FD2630)
#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD2600)
#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x12FD2920)

namespace MoleMole
{
	inline static constexpr unsigned int TowerDefenseUnlockDisplayMessage_TypeDefinitionIndex = 82345;

	class TowerDefenseUnlockDisplayMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MoleMole::TowerDefenseUnlockDisplayMessage_TowerDefenseUnlockType type; // 0x28
		::System::Int32 id; // 0x2C

		::System::Void _ctor(::System::Int32 id, ::MoleMole::TowerDefenseUnlockDisplayMessage_TowerDefenseUnlockType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::TowerDefenseUnlockDisplayMessage_TowerDefenseUnlockType))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE__CTOR_OFFSET))(this, id, type);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
