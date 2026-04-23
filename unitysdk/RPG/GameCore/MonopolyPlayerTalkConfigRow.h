#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B4C4C0)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B4CB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyPlayerTalkConfigRow_TypeDefinitionIndex = 11468;

	class MonopolyPlayerTalkConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 Priority; // 0x14
		::RPG::Client::TextID ContentTextID; // 0x18

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
