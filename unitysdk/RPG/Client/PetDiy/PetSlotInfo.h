#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PetDiy { class PetDiyData; }

#define RPG_CLIENT_PETDIY_PETSLOTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0xDAC2D90)
#define RPG_CLIENT_PETDIY_PETSLOTINFO_GET_PETDATA_OFFSET UNITYSDK_OFFSET(0xDAC2E50)
#define RPG_CLIENT_PETDIY_PETSLOTINFO_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xDAC2E70)
#define RPG_CLIENT_PETDIY_PETSLOTINFO_SET_PETDATA_OFFSET UNITYSDK_OFFSET(0xDAC2E60)
#define RPG_CLIENT_PETDIY_PETSLOTINFO_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xDAC2E80)
#define RPG_CLIENT_PETDIY_PETSLOTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xDABF8B0)
#define RPG_CLIENT_PETDIY_PETSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC2A50)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetSlotInfo_TypeDefinitionIndex = 74486;

	class PetSlotInfo : public ::System::Object
	{
	public:
		::RPG::Client::PetDiy::PetDiyData* _PetData_k__BackingField; // 0x10
		::System::UInt32 _SlotID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETSLOTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 a1, ::RPG::Client::PetDiy::PetDiyData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETSLOTINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PetDiy::PetSlotInfo* Clone()
		{
			return ((::RPG::Client::PetDiy::PetSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETSLOTINFO_CLONE_OFFSET))(this);
		}

		::RPG::Client::PetDiy::PetDiyData* get_PetData()
		{
			return ((::RPG::Client::PetDiy::PetDiyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETSLOTINFO_GET_PETDATA_OFFSET))(this);
		}

		::System::Void set_PetData(::RPG::Client::PetDiy::PetDiyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETSLOTINFO_SET_PETDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETSLOTINFO_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETSLOTINFO_SET_SLOTID_OFFSET))(this, a1);
		}
	};
}
