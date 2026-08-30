#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNKEYWORDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CCC7720)
#define RPG_GAMECORE_ROGUETOURNKEYWORDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC79D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournKeywordRow_TypeDefinitionIndex = 14846;

	class RogueTournKeywordRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RogueFormulaList; // 0x10
		::Il2CppArray<::System::UInt32>* MazeBuffList; // 0x18
		::System::String* KeywordIcon; // 0x20
		::System::UInt32 ExtraEffect; // 0x28
		::System::UInt32 KeywordBuffType; // 0x2C
		::System::UInt32 KeywordID; // 0x30
		::System::UInt32 KeywordExtraEffect; // 0x34
		::System::UInt32 MazeBuffID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNKEYWORDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournKeywordRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournKeywordRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNKEYWORDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
