#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaHexEquipmentSlotItemInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA65840)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA65880)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__GET_EQUIPPEDCOUNT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AA65890)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentSlotPanelInfo___c_TypeDefinitionIndex = 69572;

	class RogueTournPersonaHexEquipmentSlotPanelInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaHexEquipmentSlotPanelInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C750);
		}
		static ::System::Func_2<::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaHexEquipmentSlotPanelInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_EquippedCount_b__2_0(::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__GET_EQUIPPEDCOUNT_B__2_0_OFFSET))(this, a1);
		}
	};
}
