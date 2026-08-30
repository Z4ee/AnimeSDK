#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightForgeAwardData.h"

class Class_1_D17272E82AE804C2_431;
namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0xD1985C0)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xD1985E0)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0xD1985D0)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD198590)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeEquipAwardData_TypeDefinitionIndex = 65048;

	class GridFightForgeEquipAwardData : public ::RPG::Client::GridFightForgeAwardData
	{
	public:
		::System::UInt32 _EquipID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_431* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_431*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_EquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPID_OFFSET))(this);
		}

		::System::Void set_EquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_SET_EQUIPID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipItemConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPITEMCONFIG_OFFSET))(this);
		}
	};
}
