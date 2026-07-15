#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNNPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB7C950)
#define RPG_GAMECORE_ROGUETOURNNPCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7CA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournNPCRow_TypeDefinitionIndex = 14452;

	class RogueTournNPCRow : public ::System::Object
	{
	public:
		::System::String* NPCJsonPath; // 0x10
		::System::UInt32 RogueNPCID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNNPCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournNPCRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournNPCRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNNPCROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
