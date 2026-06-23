#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCActionBase.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15823D50)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCEnterAction_TypeDefinitionIndex = 44656;

	class GalGameNPCEnterAction : public ::MoleMole::GalGame::GalGameNPCActionBase
	{
	public:
		::System::String* depthTexturePath; // 0x38
		::System::String* backgroundKey; // 0x40
		::MoleMole::GalGame::GalgameSubFilterType subFilterType; // 0x48
		::MoleMole::GalGame::GalgameFilterType filterType; // 0x4C
		::System::Boolean useMainCityTimeBackGround; // 0x50
		::MoleMole::GalGame::GalgameRainMode rainMode; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION__CTOR_OFFSET))(this);
		}
	};
}
