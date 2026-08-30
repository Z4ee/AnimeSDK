#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEBONUSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D912560)
#define RPG_GAMECORE_ROGUEBONUSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D912D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBonusRow_TypeDefinitionIndex = 14522;

	class RogueBonusRow : public ::System::Object
	{
	public:
		::System::String* BonusIcon; // 0x10
		::RPG::Client::TextID BonusTag; // 0x18
		::RPG::Client::TextID BonusTitle; // 0x28
		::System::UInt32 BonusEvent; // 0x38
		::System::UInt32 BonusID; // 0x3C
		::RPG::Client::TextID BonusDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueBonusRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueBonusRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
