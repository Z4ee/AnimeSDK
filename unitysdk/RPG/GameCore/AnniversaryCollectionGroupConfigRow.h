#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE1F880)
#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1FA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnniversaryCollectionGroupConfigRow_TypeDefinitionIndex = 12578;

	class AnniversaryCollectionGroupConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TabIDList; // 0x10
		::RPG::GameCore::AnniversaryCollectionGroupType GroupID; // 0x18
		::System::UInt32 ActivityID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
