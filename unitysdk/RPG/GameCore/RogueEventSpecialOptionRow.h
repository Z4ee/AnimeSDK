#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D16DE0)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D17380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueEventSpecialOptionRow_TypeDefinitionIndex = 14019;

	class RogueEventSpecialOptionRow : public ::System::Object
	{
	public:
		::System::String* AeonFigure; // 0x10
		::System::String* AeonIcon; // 0x18
		::System::UInt32 SpecialOptionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueEventSpecialOptionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueEventSpecialOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
