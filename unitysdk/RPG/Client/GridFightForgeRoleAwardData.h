#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightForgeAwardData.h"

class Class_1_D17272E82AE804C2_419;
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x1A6AC850)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLESTAR_OFFSET UNITYSDK_OFFSET(0x1A6AC870)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1A6AC890)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0x1A6AC860)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLESTAR_OFFSET UNITYSDK_OFFSET(0x1A6AC880)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x1A6AC8A0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6AC560)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeRoleAwardData_TypeDefinitionIndex = 62065;

	class GridFightForgeRoleAwardData : public ::RPG::Client::GridFightForgeAwardData
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::System::UInt32 _RoleID_k__BackingField; // 0x20
		::System::UInt32 _RoleStar_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_419* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_419*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLEID_OFFSET))(this);
		}

		::System::Void set_RoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLESTAR_OFFSET))(this);
		}

		::System::Void set_RoleStar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLESTAR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLEAWARDDATA_SET_ROLE_OFFSET))(this, a1);
		}
	};
}
