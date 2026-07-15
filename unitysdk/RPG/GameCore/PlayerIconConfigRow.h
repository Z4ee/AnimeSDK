#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IconType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERICONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA0A830)
#define RPG_GAMECORE_PLAYERICONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0AFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerIconConfigRow_TypeDefinitionIndex = 13913;

	class PlayerIconConfigRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 SortType; // 0x18
		::System::UInt32 Sort; // 0x1C
		::System::Boolean IsVisible; // 0x20
		::System::UInt32 AvatarID; // 0x24
		::RPG::GameCore::IconType Type; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerIconConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerIconConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
