#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3F13E0)
#define RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F15A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUnitDisplayRow_TypeDefinitionIndex = 14721;

	class RogueMagicUnitDisplayRow : public ::System::Object
	{
	public:
		::System::String* MagicUnitIcon; // 0x10
		::System::UInt32 MagicUnitID; // 0x18
		::RPG::Client::TextID MagicUnitName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicUnitDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicUnitDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
