#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CD80A50)
#define RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD80C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEquipmentRewardMaterialRow_TypeDefinitionIndex = 11380;

	class ActivityEquipmentRewardMaterialRow : public ::System::Object
	{
	public:
		::System::UInt32 GotoID; // 0x10
		::RPG::Client::TextID ProgressText; // 0x18
		::System::UInt32 RealProgress; // 0x28
		::System::UInt32 QuestID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
