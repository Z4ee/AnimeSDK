#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigHollowLongpressInteractList; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x159ED810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardInteract_TypeDefinitionIndex = 66516;

	class ConfigHollowChessboardInteract : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single MoveRspTime; // 0x58
		::System::Single InteractRspTime; // 0x5C
		::System::Single InteractDelay; // 0x60
		::MoleMole::Config::ConfigHollowLongpressInteractList* InteractList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDINTERACT__CTOR_OFFSET))(this);
		}
	};
}
