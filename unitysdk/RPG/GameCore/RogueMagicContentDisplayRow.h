#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONTENTDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17612FB0)
#define RPG_GAMECORE_ROGUEMAGICCONTENTDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17613130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicContentDisplayRow_TypeDefinitionIndex = 13627;

	class RogueMagicContentDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DisplayContent; // 0x10
		::System::UInt32 DisplayID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONTENTDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicContentDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicContentDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONTENTDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
