#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EXPEDITIONBATTLEAVATARDAMAGEVIEWMODEL_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B88AD00)
#define RPG_CLIENT_EXPEDITIONBATTLEAVATARDAMAGEVIEWMODEL_GET_DAMAGEPERCENT_OFFSET UNITYSDK_OFFSET(0x1B88AD20)
#define RPG_CLIENT_EXPEDITIONBATTLEAVATARDAMAGEVIEWMODEL_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x1B88AD10)
#define RPG_CLIENT_EXPEDITIONBATTLEAVATARDAMAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88AD30)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleAvatarDamageViewModel_TypeDefinitionIndex = 64015;

	class ExpeditionBattleAvatarDamageViewModel : public ::System::Object
	{
	public:
		::System::UInt64 _Damage_k__BackingField; // 0x10
		::System::Single _DamagePercent_k__BackingField; // 0x18
		::System::UInt32 _AvatarID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEAVATARDAMAGEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEAVATARDAMAGEVIEWMODEL_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt64 get_Damage()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEAVATARDAMAGEVIEWMODEL_GET_DAMAGE_OFFSET))(this);
		}

		::System::Single get_DamagePercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEAVATARDAMAGEVIEWMODEL_GET_DAMAGEPERCENT_OFFSET))(this);
		}
	};
}
