#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMGOTODATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A2F960)
#define RPG_GAMECORE_ITEMGOTODATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2FF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemGotoDataRow_TypeDefinitionIndex = 13143;

	class ItemGotoDataRow : public ::System::Object
	{
	public:
		::System::UInt32 GotoID; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemGotoDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemGotoDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
