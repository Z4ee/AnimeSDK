#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELITEMGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1709E1D0)
#define RPG_GAMECORE_CHIMERADUELITEMGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1709E320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelItemGroupRow_TypeDefinitionIndex = 10421;

	class ChimeraDuelItemGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ItemIDList; // 0x10
		::System::UInt32 ItemGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELITEMGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelItemGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelItemGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELITEMGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
