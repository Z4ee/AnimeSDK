#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightForgeAwardData.h"

class Class_1_D17272E82AE804C2_363;
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xA4A10B0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLESTAR_OFFSET UNITYSDK_OFFSET(0xA4A10D0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xA4A10F0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0xA4A10C0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLESTAR_OFFSET UNITYSDK_OFFSET(0xA4A10E0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLE_OFFSET UNITYSDK_OFFSET(0xA4A1100)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A0E60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeRoleAwardData_TypeDefinitionIndex = 59837;

	class GridFightForgeRoleAwardData : public ::RPG::Client::GridFightForgeAwardData
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::System::UInt32 _RoleID_k__BackingField; // 0x20
		::System::UInt32 _RoleStar_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 awardIndex, ::Class_1_D17272E82AE804C2_363* protoRole)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_363*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA__CTOR_OFFSET))(this, awardIndex, protoRole);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLEID_OFFSET))(this);
		}

		::System::Void set_RoleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLEID_OFFSET))(this, value);
		}

		::System::UInt32 get_RoleStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLESTAR_OFFSET))(this);
		}

		::System::Void set_RoleStar(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLESTAR_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLE_OFFSET))(this, value);
		}
	};
}
