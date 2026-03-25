#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNFORMULAAEONICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17665B20)
#define RPG_GAMECORE_ROGUETOURNFORMULAAEONICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17665D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaAeonIconRow_TypeDefinitionIndex = 13746;

	class RogueTournFormulaAeonIconRow : public ::System::Object
	{
	public:
		::System::String* UltraFormulaCardIcon; // 0x10
		::System::String* FormulaIcon; // 0x18
		::System::String* UltraFormulaIcon; // 0x20
		::System::String* FormulaSubIcon; // 0x28
		::System::UInt32 BuffTypeID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAAEONICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournFormulaAeonIconRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaAeonIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAAEONICONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
