#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUENPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1763C1C0)
#define RPG_GAMECORE_ROGUENPCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1763C2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNPCRow_TypeDefinitionIndex = 13538;

	class RogueNPCRow : public ::System::Object
	{
	public:
		::System::String* NPCJsonPath; // 0x10
		::System::UInt32 RogueNPCID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNPCRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNPCRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
