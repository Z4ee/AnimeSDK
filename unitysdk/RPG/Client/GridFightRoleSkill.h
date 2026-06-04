#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleSkillConfig; }
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEQUIPMENTCONFIG_1_OFFSET UNITYSDK_OFFSET(0xBBEC890)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEQUIPMENTCONFIG_OFFSET UNITYSDK_OFFSET(0xBBEC7F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0xBBEC550)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIG_1_OFFSET UNITYSDK_OFFSET(0xBBEC710)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIG_OFFSET UNITYSDK_OFFSET(0xBBEC6B0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETCURROLESKILLBYSTAR_OFFSET UNITYSDK_OFFSET(0xBBECE40)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETEQUIPMENT_OFFSET UNITYSDK_OFFSET(0xBBEC790)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLDETAILS_1_OFFSET UNITYSDK_OFFSET(0xBBEB670)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLDETAILS_OFFSET UNITYSDK_OFFSET(0xBBEB610)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLTYPETEXTIDS_1_OFFSET UNITYSDK_OFFSET(0xBBEC260)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLTYPETEXTIDS_OFFSET UNITYSDK_OFFSET(0xBBEBF20)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_BACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0xBBEC5D0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBBEC930)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xBBECB70)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xBBECEE0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xBBEB600)
#define RPG_CLIENT_GRIDFIGHTROLESKILL__GETAVATARSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xBBEBB30)
#define RPG_CLIENT_GRIDFIGHTROLESKILL__GETSERVANTSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xBBEBD00)
#define RPG_CLIENT_GRIDFIGHTROLESKILL__GET_BACKRANKCONFIGS_B__7_0_OFFSET UNITYSDK_OFFSET(0xBBECEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkill_TypeDefinitionIndex = 60907;

	class GridFightRoleSkill : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _Role; // 0x10

		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>* GetSkillDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLDETAILS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>* GetSkillDetails_1(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLDETAILS_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetSkillTypeTextIDs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLTYPETEXTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetSkillTypeTextIDs_1(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLTYPETEXTIDS_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>* GetBackRankConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBackRankConfig*>* get_BackRankConfigs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBackRankConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_BACKRANKCONFIGS_OFFSET))(this);
		}

		::RPG::Client::GridFightBackRankConfig* GetBackRankConfig()
		{
			return ((::RPG::Client::GridFightBackRankConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightBackRankConfig* GetBackRankConfig_1(::System::Boolean a1)
		{
			return ((::RPG::Client::GridFightBackRankConfig*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIG_1_OFFSET))(this, a1);
		}

		::RPG::Client::EquipmentItemData* GetEquipment()
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETEQUIPMENT_OFFSET))(this);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfig(::System::Boolean a1)
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEQUIPMENTCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfig_1()
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEQUIPMENTCONFIG_1_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillConfig* get_Config()
		{
			return ((::RPG::Client::GridFightRoleSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::UInt32 _GetAvatarSkillLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL__GETAVATARSKILLLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 _GetServantSkillLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL__GETSERVANTSKILLLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleSkill* GetCurRoleSkillByStar(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRoleSkill*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETCURROLESKILLBYSTAR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_ROLE_OFFSET))(this);
		}

		::System::Boolean _get_BackRankConfigs_b__7_0(::RPG::Client::GridFightBackRankConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL__GET_BACKRANKCONFIGS_B__7_0_OFFSET))(this, a1);
		}
	};
}
