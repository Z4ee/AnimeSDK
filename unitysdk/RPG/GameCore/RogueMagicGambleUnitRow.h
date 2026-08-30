#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueGambleUnitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93ADE0)
#define RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93AFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicGambleUnitRow_TypeDefinitionIndex = 14725;

	class RogueMagicGambleUnitRow : public ::System::Object
	{
	public:
		::System::String* GambleUnitIcon; // 0x10
		::RPG::GameCore::RogueGambleUnitType GambleUnitType; // 0x18
		::System::UInt32 GambleUnitParam; // 0x1C
		::System::UInt32 GambleUnitID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicGambleUnitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicGambleUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
