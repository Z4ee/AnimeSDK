#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSFORMULAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17176E50)
#define RPG_GAMECORE_DRINKMAKERCHEERSFORMULAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171772B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersFormulaRow_TypeDefinitionIndex = 12042;

	class DrinkMakerCheersFormulaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IngredientList; // 0x10
		::System::String* SmallIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 MixRate; // 0x28
		::System::Boolean IsCustom; // 0x2C
		::RPG::Client::TextID FormulaName; // 0x30
		::System::UInt32 IceID; // 0x40
		::System::UInt32 CupID; // 0x44
		::System::UInt32 DecoID; // 0x48
		::System::UInt32 FormulaID; // 0x4C
		::RPG::Client::TextID FormulaDesc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSFORMULAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCheersFormulaRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersFormulaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSFORMULAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
