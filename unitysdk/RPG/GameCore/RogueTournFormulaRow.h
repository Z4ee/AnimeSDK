#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNFORMULAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D752C0)
#define RPG_GAMECORE_ROGUETOURNFORMULAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D75BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaRow_TypeDefinitionIndex = 14211;

	class RogueTournFormulaRow : public ::System::Object
	{
	public:
		::System::String* FormulaStoryJson; // 0x10
		::System::UInt32 MainBuffNum; // 0x18
		::System::Boolean IsInHandbook; // 0x1C
		::RPG::GameCore::RogueTournMode TournMode; // 0x20
		::System::UInt32 FormulaID; // 0x24
		::System::UInt32 SubBuffTypeID; // 0x28
		::RPG::GameCore::RogueFormulaCategory FormulaCategory; // 0x2C
		::System::UInt32 SubBuffNum; // 0x30
		::System::UInt32 MazeBuffID; // 0x34
		::System::UInt32 MainBuffTypeID; // 0x38
		::System::UInt32 FormulaDisplayID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournFormulaRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
