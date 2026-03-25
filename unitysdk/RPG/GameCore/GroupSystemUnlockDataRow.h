#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROUPSYSTEMUNLOCKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1728D260)
#define RPG_GAMECORE_GROUPSYSTEMUNLOCKDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1728D380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupSystemUnlockDataRow_TypeDefinitionIndex = 12178;

	class GroupSystemUnlockDataRow : public ::System::Object
	{
	public:
		::System::UInt32 GroupSystemUnlockID; // 0x10
		::System::UInt32 UnlockID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPSYSTEMUNLOCKDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GroupSystemUnlockDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupSystemUnlockDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPSYSTEMUNLOCKDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
