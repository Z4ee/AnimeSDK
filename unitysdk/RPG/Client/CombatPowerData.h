#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerSource.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define RPG_CLIENT_COMBATPOWERDATA_GETCOMBATPOWERVALUE_OFFSET UNITYSDK_OFFSET(0x94037C0)
#define RPG_CLIENT_COMBATPOWERDATA_GETTOTALCOMBATPOWERVALUE_OFFSET UNITYSDK_OFFSET(0x9403720)
#define RPG_CLIENT_COMBATPOWERDATA_GETTOTALCOMBATPOWERVALUE_SERVER_OFFSET UNITYSDK_OFFSET(0x9403770)
#define RPG_CLIENT_COMBATPOWERDATA_GET__AVATARDATA_OFFSET UNITYSDK_OFFSET(0x9403950)
#define RPG_CLIENT_COMBATPOWERDATA_SETCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0x9403690)
#define RPG_CLIENT_COMBATPOWERDATA_SET__AVATARDATA_OFFSET UNITYSDK_OFFSET(0x9403960)
#define RPG_CLIENT_COMBATPOWERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x94034E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CombatPowerData_TypeDefinitionIndex = 50785;

	class CombatPowerData : public ::System::Object
	{
	public:
		::RPG::Client::AvatarData* __AvatarData_k__BackingField; // 0x10
		::System::Collections::Generic::SortedList_2<::RPG::GameCore::CombatPowerSource, ::System::Single>* _CombatPowerDict; // 0x18

		::System::Void _ctor(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMBATPOWERDATA__CTOR_OFFSET))(this, avatarData);
		}

		::System::Void SetCombatPower(::RPG::GameCore::CombatPowerSource CombatPowerSourceType, ::System::Single CombatPowerModifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerSource, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMBATPOWERDATA_SETCOMBATPOWER_OFFSET))(this, CombatPowerSourceType, CombatPowerModifier);
		}

		::System::Single GetTotalCombatPowerValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMBATPOWERDATA_GETTOTALCOMBATPOWERVALUE_OFFSET))(this);
		}

		::System::UInt32 GetTotalCombatPowerValue_Server()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMBATPOWERDATA_GETTOTALCOMBATPOWERVALUE_SERVER_OFFSET))(this);
		}

		::System::Single GetCombatPowerValue(::RPG::GameCore::CombatPowerSource CombatPowerSourceType)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::CombatPowerSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMBATPOWERDATA_GETCOMBATPOWERVALUE_OFFSET))(this, CombatPowerSourceType);
		}

		::RPG::Client::AvatarData* get__AvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMBATPOWERDATA_GET__AVATARDATA_OFFSET))(this);
		}

		::System::Void set__AvatarData(::RPG::Client::AvatarData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMBATPOWERDATA_SET__AVATARDATA_OFFSET))(this, value);
		}
	};
}
