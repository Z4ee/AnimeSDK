#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17606DF0)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17606F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueOptionRow_TypeDefinitionIndex = 13549;

	class RogueDialogueOptionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 OptionDisplayID; // 0x18
		::System::UInt32 OptionID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDialogueOptionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
