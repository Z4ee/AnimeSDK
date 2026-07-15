#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICMISCDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFB69A0)
#define RPG_GAMECORE_ROGUEMAGICMISCDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB6B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicMiscDisplayRow_TypeDefinitionIndex = 14289;

	class RogueMagicMiscDisplayRow : public ::System::Object
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::RPG::Client::TextID DisplayContent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICMISCDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicMiscDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicMiscDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICMISCDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
