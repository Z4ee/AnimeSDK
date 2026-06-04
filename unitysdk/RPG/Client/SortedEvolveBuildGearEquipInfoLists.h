#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SORTEDEVOLVEBUILDGEAREQUIPINFOLISTS__CTOR_OFFSET UNITYSDK_OFFSET(0xC8E8CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int SortedEvolveBuildGearEquipInfoLists_TypeDefinitionIndex = 59747;

	class SortedEvolveBuildGearEquipInfoLists : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* AccessoryList; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* WeaponList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SORTEDEVOLVEBUILDGEAREQUIPINFOLISTS__CTOR_OFFSET))(this);
		}
	};
}
