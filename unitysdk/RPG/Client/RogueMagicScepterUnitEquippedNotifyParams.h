#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERUNITEQUIPPEDNOTIFYPARAMS_ISSLOTUNITEQUIPPED_OFFSET UNITYSDK_OFFSET(0xC7B3BB0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERUNITEQUIPPEDNOTIFYPARAMS_MERGE_OFFSET UNITYSDK_OFFSET(0xC7B3C50)
#define RPG_CLIENT_ROGUEMAGICSCEPTERUNITEQUIPPEDNOTIFYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B3CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterUnitEquippedNotifyParams_TypeDefinitionIndex = 63056;

	class RogueMagicScepterUnitEquippedNotifyParams : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>>* UnitEquippedSlots; // 0x10
		::System::UInt32 ScepterID; // 0x18
		::System::UInt32 Level; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERUNITEQUIPPEDNOTIFYPARAMS__CTOR_OFFSET))(this);
		}

		::System::Boolean IsSlotUnitEquipped(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERUNITEQUIPPEDNOTIFYPARAMS_ISSLOTUNITEQUIPPED_OFFSET))(this, a1, a2);
		}

		::System::Void Merge(::RPG::Client::RogueMagicScepterUnitEquippedNotifyParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterUnitEquippedNotifyParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERUNITEQUIPPEDNOTIFYPARAMS_MERGE_OFFSET))(this, a1);
		}
	};
}
