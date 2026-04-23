#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D0ACD0)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D0B2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCDiceSurfaceRarityRow_TypeDefinitionIndex = 13946;

	class RogueDLCDiceSurfaceRarityRow : public ::System::Object
	{
	public:
		::System::String* DiceSurfaceRarityImage; // 0x10
		::System::String* NameColor; // 0x18
		::System::UInt32 Rarity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
