#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D24900)
#define RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D24AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUnitDisplayRow_TypeDefinitionIndex = 14091;

	class RogueMagicUnitDisplayRow : public ::System::Object
	{
	public:
		::System::String* MagicUnitIcon; // 0x10
		::RPG::Client::TextID MagicUnitName; // 0x18
		::System::UInt32 MagicUnitID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicUnitDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicUnitDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
