#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatIKType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_LOOKIKCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13020880)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int LookIKCfg_TypeDefinitionIndex = 45924;

	class LookIKCfg : public ::System::Object
	{
	public:
		::System::Int32 AvatarID; // 0x10
		::System::String* GroupMember; // 0x18
		::System::Boolean Enable; // 0x20
		::MoleMole::GalGame::MainCityChatIKType IKType; // 0x24
		::System::Int32 IKParam; // 0x28
		::System::String* IKMemberParam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG__CTOR_OFFSET))(this);
		}
	};
}
