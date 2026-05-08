#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCActionBase.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11752DB0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCEnterAction_TypeDefinitionIndex = 48525;

	class GalGameNPCEnterAction : public ::MoleMole::GalGame::GalGameNPCActionBase
	{
	public:
		::System::String* backgroundKey; // 0x38
		::MoleMole::GalGame::GalgameFilterType filterType; // 0x40
		::System::Boolean useMainCityTimeBackGround; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION__CTOR_OFFSET))(this);
		}
	};
}
