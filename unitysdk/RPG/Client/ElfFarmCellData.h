#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElfFarmCellData_ElfCellUpdateReason.h"
#include "unitysdk/System/Object.h"

class Class_1_04B49712BAFF7721;
class Class_1_28AF0C7D8FD87E9F;
namespace RPG::Client { class ElfFarmFieldData; }
namespace RPG::Client { class ElfFarmGrowingCropsData; }

#define RPG_CLIENT_ELFFARMCELLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC673C0)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_GROWINGDATA_OFFSET UNITYSDK_OFFSET(0x1AC67700)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AC676C0)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_ISGROWINGMODELNEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1AC67720)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1AC676E0)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x1AC67760)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_UPDATEREASON_OFFSET UNITYSDK_OFFSET(0x1AC67740)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_GROWINGDATA_OFFSET UNITYSDK_OFFSET(0x1AC67710)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AC676D0)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_ISGROWINGMODELNEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1AC67730)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1AC676F0)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_UPDATEREASON_OFFSET UNITYSDK_OFFSET(0x1AC67750)
#define RPG_CLIENT_ELFFARMCELLDATA_SYNCHARVEST_OFFSET UNITYSDK_OFFSET(0x1AC67610)
#define RPG_CLIENT_ELFFARMCELLDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1AC67430)
#define RPG_CLIENT_ELFFARMCELLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC67420)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmCellData_TypeDefinitionIndex = 63738;

	class ElfFarmCellData : public ::System::Object
	{
	public:
		::RPG::Client::ElfFarmGrowingCropsData* _GrowingData_k__BackingField; // 0x10
		::RPG::Client::ElfFarmFieldData* _Owner_k__BackingField; // 0x18
		::RPG::Client::ElfFarmCellData_ElfCellUpdateReason _UpdateReason_k__BackingField; // 0x20
		::System::Boolean _IsGrowingModelNeedUpdate_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmCellData* Create(::RPG::Client::ElfFarmFieldData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ElfFarmCellData*(*)(::RPG::Client::ElfFarmFieldData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Sync(::Class_1_28AF0C7D8FD87E9F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncHarvest(::Class_1_04B49712BAFF7721* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_04B49712BAFF7721*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SYNCHARVEST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmFieldData* get_Owner()
		{
			return ((::RPG::Client::ElfFarmFieldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::Client::ElfFarmFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_OWNER_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmGrowingCropsData* get_GrowingData()
		{
			return ((::RPG::Client::ElfFarmGrowingCropsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_GROWINGDATA_OFFSET))(this);
		}

		::System::Void set_GrowingData(::RPG::Client::ElfFarmGrowingCropsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmGrowingCropsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_GROWINGDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGrowingModelNeedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_ISGROWINGMODELNEEDUPDATE_OFFSET))(this);
		}

		::System::Void set_IsGrowingModelNeedUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_ISGROWINGMODELNEEDUPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmCellData_ElfCellUpdateReason get_UpdateReason()
		{
			return ((::RPG::Client::ElfFarmCellData_ElfCellUpdateReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_UPDATEREASON_OFFSET))(this);
		}

		::System::Void set_UpdateReason(::RPG::Client::ElfFarmCellData_ElfCellUpdateReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmCellData_ElfCellUpdateReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_UPDATEREASON_OFFSET))(this, a1);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_SORTID_OFFSET))(this);
		}
	};
}
