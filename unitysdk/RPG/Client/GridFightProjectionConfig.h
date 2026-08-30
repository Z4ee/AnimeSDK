#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::GameCore { class GridFightProjectionConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CANSUMMONINTEAMCONTEXT_OFFSET UNITYSDK_OFFSET(0xD2F1150)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETACTIVATETRAITTHRESHOLDLAYER_OFFSET UNITYSDK_OFFSET(0xD2F0D50)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETBYROLEID_OFFSET UNITYSDK_OFFSET(0xD2EFDF0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITSUMMONRULEACTIVE_OFFSET UNITYSDK_OFFSET(0xD2F1570)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITUNLOCKRULE_OFFSET UNITYSDK_OFFSET(0xD2F0E20)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xD2EE4F0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ISSELLABLE_OFFSET UNITYSDK_OFFSET(0xD2EE310)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ISTRAITUNLOCK_OFFSET UNITYSDK_OFFSET(0xD2F0530)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xD2F03B0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_PROJECTIONDESC_OFFSET UNITYSDK_OFFSET(0xD2F0420)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xD2F04E0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xD2F0D30)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xD2EE5F0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_SORTEDTRAITIDS_OFFSET UNITYSDK_OFFSET(0xD2F01A0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_TRAITIDS_OFFSET UNITYSDK_OFFSET(0xD2F0150)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_UNLOCKRULE_OFFSET UNITYSDK_OFFSET(0xD2F0590)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_SET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xD2F0D40)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD2F0140)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD2EE9B0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__GETUNLOCKRULETIP_OFFSET UNITYSDK_OFFSET(0xD2F05E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjectionConfig_TypeDefinitionIndex = 65140;

	class GridFightProjectionConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightProjectionConfigRow*>** StaticGet__RowByRoleID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightProjectionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig_TypeDefinitionIndex)->GetStaticField(0x437C0);
		}
		::RPG::GameCore::GridFightProjectionConfigRow* _Row; // 0x10
		::RPG::Client::GridFightRoleConfig* _RoleConfig_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::GridFightProjectionConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightProjectionConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightProjectionConfig* GetByRoleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjectionConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETBYROLEID_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_TRAITIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SortedTraitIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_SORTEDTRAITIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_ProjectionDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_PROJECTIONDESC_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_RARITY_OFFSET))(this);
		}

		::System::Boolean get_IsSellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ISSELLABLE_OFFSET))(this);
		}

		::System::Boolean get_IsTraitUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ISTRAITUNLOCK_OFFSET))(this);
		}

		::System::String* get_UnlockRule()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_UNLOCKRULE_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::Void set_RoleConfig(::RPG::Client::GridFightRoleConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_SET_ROLECONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetActivateTraitThresholdLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETACTIVATETRAITTHRESHOLDLAYER_OFFSET))(this, a1);
		}

		::System::String* GetTraitUnlockRule(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITUNLOCKRULE_OFFSET))(this, a1);
		}

		::System::Boolean CanSummonInTeamContext(::Class_0_16E4307DCC419505_855* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CANSUMMONINTEAMCONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean GetTraitSummonRuleActive(::System::UInt32 a1, ::Class_0_16E4307DCC419505_855* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITSUMMONRULEACTIVE_OFFSET))(this, a1, a2);
		}

		::System::String* _GetUnlockRuleTip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__GETUNLOCKRULETIP_OFFSET))(this);
		}
	};
}
