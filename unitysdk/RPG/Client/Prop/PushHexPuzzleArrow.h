#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexDirection.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleItemBase.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }

#define RPG_CLIENT_PROP_PUSHHEXPUZZLEARROW_INIT_OFFSET UNITYSDK_OFFSET(0xDCFC320)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEARROW_REFRESHDIRECTION_OFFSET UNITYSDK_OFFSET(0xDCFC3A0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEARROW__CTOR_OFFSET UNITYSDK_OFFSET(0xDCFC590)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PushHexPuzzleArrow_TypeDefinitionIndex = 78146;

	class PushHexPuzzleArrow : public ::RPG::Client::Prop::HexPuzzleItemBase
	{
	public:
		::RPG::Client::Prop::HexDirection Dir; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEARROW__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEARROW_INIT_OFFSET))(this, a1);
		}

		::System::Void RefreshDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEARROW_REFRESHDIRECTION_OFFSET))(this);
		}
	};
}
