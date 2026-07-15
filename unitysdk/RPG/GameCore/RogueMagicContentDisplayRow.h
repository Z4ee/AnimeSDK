#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONTENTDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFB58A0)
#define RPG_GAMECORE_ROGUEMAGICCONTENTDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB5A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicContentDisplayRow_TypeDefinitionIndex = 14309;

	class RogueMagicContentDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DisplayContent; // 0x10
		::System::UInt32 DisplayID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONTENTDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicContentDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicContentDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONTENTDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
