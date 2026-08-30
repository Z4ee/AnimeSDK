#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueGambleUnitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNGAMBLEUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CCC5C00)
#define RPG_GAMECORE_ROGUETOURNGAMBLEUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC5DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournGambleUnitRow_TypeDefinitionIndex = 14878;

	class RogueTournGambleUnitRow : public ::System::Object
	{
	public:
		::System::String* GambleUnitIcon; // 0x10
		::System::UInt32 UnitTextureParam; // 0x18
		::RPG::GameCore::RogueGambleUnitType GambleUnitType; // 0x1C
		::System::UInt32 GambleUnitID; // 0x20
		::System::UInt32 GambleUnitParam; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNGAMBLEUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournGambleUnitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournGambleUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNGAMBLEUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
