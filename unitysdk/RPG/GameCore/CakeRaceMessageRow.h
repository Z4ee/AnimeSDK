#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceMessageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704D040)
#define RPG_GAMECORE_CAKERACEMESSAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1704D280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceMessageRow_TypeDefinitionIndex = 10299;

	class CakeRaceMessageRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID MessageText; // 0x10
		::System::Boolean CanPlayerUse; // 0x20
		::System::UInt32 CatID; // 0x24
		::System::UInt32 MessageID; // 0x28
		::RPG::GameCore::CakeRaceMessageType MessageType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMESSAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeRaceMessageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceMessageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMESSAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
