#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCActionBase.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCFadeAction_FadeType.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1A220)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCFadeAction_TypeDefinitionIndex = 50745;

	class GalGameNPCFadeAction : public ::MoleMole::GalGame::GalGameNPCActionBase
	{
	public:
		::System::String* backgroundKey; // 0x38
		::System::Boolean useMainCityTimeBackGround; // 0x40
		::MoleMole::GalGame::GalGameNPCFadeAction_FadeType fadeActionType; // 0x41
		::MoleMole::GalGame::GalgameFilterType filterType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION__CTOR_OFFSET))(this);
		}
	};
}
