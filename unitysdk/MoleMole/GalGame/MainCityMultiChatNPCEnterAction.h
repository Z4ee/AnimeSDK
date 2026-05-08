#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/InLevelChatEntitySlot.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatActionBase.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1821B5A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityMultiChatNPCEnterAction_TypeDefinitionIndex = 40964;

	class MainCityMultiChatNPCEnterAction : public ::MoleMole::GalGame::MainCityChatActionBase
	{
	public:
		::System::String* showName; // 0x10
		::MoleMole::GalGame::InLevelChatEntitySlot slot; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION__CTOR_OFFSET))(this);
		}
	};
}
