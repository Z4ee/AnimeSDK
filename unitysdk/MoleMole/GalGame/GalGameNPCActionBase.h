#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameActionBase.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4A830)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCActionBase_TypeDefinitionIndex = 82927;

	class GalGameNPCActionBase : public ::MoleMole::GalGame::GalGameActionBase
	{
	public:
		::System::String* avatarShowingKey; // 0x10
		::System::String* avatarPoseKey; // 0x18
		::System::String* avatarName; // 0x20
		::System::String* avatarFacialKey; // 0x28
		::MoleMole::GalGame::GalNPCLocation location; // 0x30
		::System::Int32 actorId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCACTIONBASE__CTOR_OFFSET))(this);
		}
	};
}
