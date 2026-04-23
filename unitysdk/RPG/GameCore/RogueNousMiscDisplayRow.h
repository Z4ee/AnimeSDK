#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSMISCDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D513D0)
#define RPG_GAMECORE_ROGUENOUSMISCDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D51550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMiscDisplayRow_TypeDefinitionIndex = 14140;

	class RogueNousMiscDisplayRow : public ::System::Object
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::RPG::Client::TextID DisplayContent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISCDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousMiscDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousMiscDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISCDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
