#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ArgueScreenShiftMode.h"
#include "unitysdk/MoleMole/GalGame/DoubleScreenShiftState.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190832F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ArgueSplitScreenMoveConfig_TypeDefinitionIndex = 70870;

	class ArgueSplitScreenMoveConfig : public ::System::Object
	{
	public:
		::MoleMole::GalGame::DoubleScreenShiftState shiftState; // 0x10
		::MoleMole::GalGame::ArgueScreenShiftMode shiftMode; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
