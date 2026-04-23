#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceMessageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18772D00)
#define RPG_GAMECORE_CAKERACEMESSAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18772F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceMessageRow_TypeDefinitionIndex = 10524;

	class CakeRaceMessageRow : public ::System::Object
	{
	public:
		::System::Boolean CanPlayerUse; // 0x10
		::System::UInt32 CatID; // 0x14
		::System::UInt32 MessageID; // 0x18
		::RPG::GameCore::CakeRaceMessageType MessageType; // 0x1C
		::RPG::Client::TextID MessageText; // 0x20

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
