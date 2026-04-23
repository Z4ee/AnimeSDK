#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMUSEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A35F40)
#define RPG_GAMECORE_ITEMUSEDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A365D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseDataRow_TypeDefinitionIndex = 13145;

	class ItemUseDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UseParam; // 0x10
		::System::UInt32 UseMultipleMax; // 0x18
		::System::UInt32 UseDataID; // 0x1C
		::System::Boolean IsAutoUse; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemUseDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemUseDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
