#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FindChestReplaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPECIALCHESTFINDDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E80DD0)
#define RPG_GAMECORE_SPECIALCHESTFINDDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E810F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialChestFindDataRow_TypeDefinitionIndex = 12571;

	class SpecialChestFindDataRow : public ::System::Object
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 ReplaceInstanceID; // 0x18
		::System::UInt32 LittleGameEntityID; // 0x1C
		::System::UInt32 ReplaceLittleGameEntityID; // 0x20
		::System::UInt32 FloorID; // 0x24
		::System::UInt32 ReplaceGroupID; // 0x28
		::RPG::GameCore::FindChestReplaceType ReplaceType; // 0x2C
		::System::Boolean IsUseSpecialMappinginfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALCHESTFINDDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialChestFindDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialChestFindDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALCHESTFINDDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
