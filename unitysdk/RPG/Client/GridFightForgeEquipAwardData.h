#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightForgeAwardData.h"

class Class_1_FA4F4A67B1C04320_353;
namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x981BBF0)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x981BC10)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x981BC00)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x981BBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeEquipAwardData_TypeDefinitionIndex = 52773;

	class GridFightForgeEquipAwardData : public ::RPG::Client::GridFightForgeAwardData
	{
	public:
		::System::UInt32 _EquipID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 awardIndex, ::Class_1_FA4F4A67B1C04320_353* protoEquip)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_FA4F4A67B1C04320_353*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA__CTOR_OFFSET))(this, awardIndex, protoEquip);
		}

		::System::UInt32 get_EquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPID_OFFSET))(this);
		}

		::System::Void set_EquipID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_SET_EQUIPID_OFFSET))(this, value);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipItemConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPITEMCONFIG_OFFSET))(this);
		}
	};
}
