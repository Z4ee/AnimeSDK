#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTEMOJICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D020F70)
#define RPG_GAMECORE_RESTAURANTEMOJICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0210B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEmojiConfigRow_TypeDefinitionIndex = 10988;

	class RestaurantEmojiConfigRow : public ::System::Object
	{
	public:
		::System::String* EmojiPath; // 0x10
		::RPG::GameCore::ElfBehaviorStateType EmojiType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMOJICONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantEmojiConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantEmojiConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMOJICONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
