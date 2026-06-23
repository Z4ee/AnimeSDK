#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatActionBase.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATNPCACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAD0D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatNPCActionBase_TypeDefinitionIndex = 65886;

	class MainCityChatNPCActionBase : public ::MoleMole::GalGame::MainCityChatActionBase
	{
	public:
		::System::String* avatarName; // 0x10
		::System::Int32 avatarId; // 0x18
		::MoleMole::GalGame::MainCityChatNPCLocation location; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCACTIONBASE__CTOR_OFFSET))(this);
		}
	};
}
