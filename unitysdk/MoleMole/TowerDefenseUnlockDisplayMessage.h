#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/TowerDefenseUnlockDisplayMessage_TowerDefenseUnlockType.h"

#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x141C8600)
#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x141C86A0)
#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x141C8640)
#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x141C8610)
#define MOLEMOLE_TOWERDEFENSEUNLOCKDISPLAYMESSAGE___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x141C8930)

namespace MoleMole
{
	inline static constexpr unsigned int TowerDefenseUnlockDisplayMessage_TypeDefinitionIndex = 54418;

	class TowerDefenseUnlockDisplayMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 id; // 0x28
		::MoleMole::TowerDefenseUnlockDisplayMessage_TowerDefenseUnlockType type; // 0x2C

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
