#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::GameCore { class GridFightProjectionConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CANSUMMONINTEAMCONTEXT_OFFSET UNITYSDK_OFFSET(0xA565A60)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETACTIVATETRAITTHRESHOLDLAYER_OFFSET UNITYSDK_OFFSET(0xA5656C0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETBYROLEID_OFFSET UNITYSDK_OFFSET(0xA564A60)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITSUMMONRULEACTIVE_OFFSET UNITYSDK_OFFSET(0xA565D40)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITUNLOCKRULE_OFFSET UNITYSDK_OFFSET(0xA565770)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xA563560)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xA564EC0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_PROJECTIONDESC_OFFSET UNITYSDK_OFFSET(0xA564EF0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xA564FB0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xA5656A0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xA5630D0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_SORTEDTRAITIDS_OFFSET UNITYSDK_OFFSET(0xA564D20)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_TRAITIDS_OFFSET UNITYSDK_OFFSET(0xA5642B0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_UNLOCKRULE_OFFSET UNITYSDK_OFFSET(0xA564FD0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_SET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xA5656B0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA564D10)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA563790)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__GETUNLOCKRULETIP_OFFSET UNITYSDK_OFFSET(0xA564FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjectionConfig_TypeDefinitionIndex = 59920;

	class GridFightProjectionConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightProjectionConfigRow*>** StaticGet__RowByRoleID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightProjectionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig_TypeDefinitionIndex)->GetStaticField(0x17270);
		}
		::RPG::Client::GridFightRoleConfig* _RoleConfig_k__BackingField; // 0x10
		::RPG::GameCore::GridFightProjectionConfigRow* _Row; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__CTOR_OFFSET))(this, id);
		}

		::System::Void _ctor_1(::RPG::GameCore::GridFightProjectionConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightProjectionConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__CTOR_1_OFFSET))(this, row);
		}

		static ::RPG::Client::GridFightProjectionConfig* GetByRoleID(::System::UInt32 roleID)
		{
			return ((::RPG::Client::GridFightProjectionConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETBYROLEID_OFFSET))(roleID);
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

		::System::String* get_UnlockRule()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_UNLOCKRULE_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::Void set_RoleConfig(::RPG::Client::GridFightRoleConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_SET_ROLECONFIG_OFFSET))(this, value);
		}

		::System::UInt32 GetActivateTraitThresholdLayer(::System::UInt32 traitID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETACTIVATETRAITTHRESHOLDLAYER_OFFSET))(this, traitID);
		}

		::System::String* GetTraitUnlockRule(::System::UInt32 traitID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITUNLOCKRULE_OFFSET))(this, traitID);
		}

		::System::Boolean CanSummonInTeamContext(::Class_0_16E4307DCC419505_722* dataContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CANSUMMONINTEAMCONTEXT_OFFSET))(this, dataContext);
		}

		::System::Boolean GetTraitSummonRuleActive(::System::UInt32 traitID, ::Class_0_16E4307DCC419505_722* dataContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITSUMMONRULEACTIVE_OFFSET))(this, traitID, dataContext);
		}

		::System::String* _GetUnlockRuleTip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__GETUNLOCKRULETIP_OFFSET))(this);
		}
	};
}
