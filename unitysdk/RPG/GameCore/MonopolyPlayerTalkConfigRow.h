#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1743F860)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1743FEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyPlayerTalkConfigRow_TypeDefinitionIndex = 11065;

	class MonopolyPlayerTalkConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ContentTextID; // 0x10
		::System::UInt32 ID; // 0x20
		::System::UInt32 Priority; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
