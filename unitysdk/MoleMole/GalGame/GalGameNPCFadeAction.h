#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCActionBase.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCFadeAction_FadeType.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x118C67F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCFadeAction_TypeDefinitionIndex = 68238;

	class GalGameNPCFadeAction : public ::MoleMole::GalGame::GalGameNPCActionBase
	{
	public:
		::System::String* backgroundKey; // 0x38
		::System::String* depthTexturePath; // 0x40
		::System::Boolean useMainCityTimeBackGround; // 0x48
		::MoleMole::GalGame::GalGameNPCFadeAction_FadeType fadeActionType; // 0x49
		::MoleMole::GalGame::GalgameSubFilterType subFilterType; // 0x4C
		::MoleMole::GalGame::GalgameRainMode rainMode; // 0x50
		::MoleMole::GalGame::GalgameFilterType filterType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION__CTOR_OFFSET))(this);
		}
	};
}
