#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EAAD70)
#define RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAAF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEquipmentRewardMaterialRow_TypeDefinitionIndex = 10650;

	class ActivityEquipmentRewardMaterialRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ProgressText; // 0x10
		::System::UInt32 RealProgress; // 0x20
		::System::UInt32 QuestID; // 0x24
		::System::UInt32 GotoID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
