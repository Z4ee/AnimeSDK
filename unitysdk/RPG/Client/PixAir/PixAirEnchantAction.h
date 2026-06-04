#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"

class Class_1_D17272E82AE804C2_690;
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_CREATEENCHANTEQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0xC3B7920)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_DOENCHANT_OFFSET UNITYSDK_OFFSET(0xC3B76F0)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3B7A60)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GET_ENCHANTTYPE_OFFSET UNITYSDK_OFFSET(0xC3B76D0)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xC3B7AD0)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_SET_ENCHANTTYPE_OFFSET UNITYSDK_OFFSET(0xC3B76E0)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_SKIPENCHANT_OFFSET UNITYSDK_OFFSET(0xC3B78D0)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B76A0)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3B7AE0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnchantAction_TypeDefinitionIndex = 73607;

	class PixAirEnchantAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::RPG::GameCore::PixAirEnchantmentType _EnchantType_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_690* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_690*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PixAirEnchantmentType get_EnchantType()
		{
			return ((::RPG::GameCore::PixAirEnchantmentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GET_ENCHANTTYPE_OFFSET))(this);
		}

		::System::Void set_EnchantType(::RPG::GameCore::PixAirEnchantmentType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PixAirEnchantmentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_SET_ENCHANTTYPE_OFFSET))(this, a1);
		}

		::System::Void DoEnchant(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_DOENCHANT_OFFSET))(this, a1);
		}

		::System::Void SkipEnchant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_SKIPENCHANT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* CreateEnchantEquipInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_CREATEENCHANTEQUIPINSTANCE_OFFSET))(this, a1);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GET_NODECASE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET))(this);
		}
	};
}
