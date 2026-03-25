#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMONSTERGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1763BB70)
#define RPG_GAMECORE_ROGUEMONSTERGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1763BCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMonsterGroupRow_TypeDefinitionIndex = 13409;

	class RogueMonsterGroupRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* RogueMonsterListAndWeight; // 0x10
		::System::UInt32 RogueMonsterGroupID; // 0x18
		::System::UInt32 EliteGroup; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMonsterGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMonsterGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
