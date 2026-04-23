#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186A7840)
#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186A79A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnniversaryCollectionGroupConfigRow_TypeDefinitionIndex = 11964;

	class AnniversaryCollectionGroupConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TabIDList; // 0x10
		::System::UInt32 ActivityID; // 0x18
		::RPG::GameCore::AnniversaryCollectionGroupType GroupID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONGROUPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
