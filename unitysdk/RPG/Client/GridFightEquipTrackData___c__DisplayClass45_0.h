#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD189180)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS45_0___TRYASSIGNBASICEQUIP_B__0_OFFSET UNITYSDK_OFFSET(0xD18A080)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS45_0___TRYASSIGNBASICEQUIP_G___NOTAVAILABLE_2_OFFSET UNITYSDK_OFFSET(0xD18A090)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass45_0_TypeDefinitionIndex = 65399;

	class GridFightEquipTrackData___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* usedUIDs; // 0x10
		::RPG::Client::GridFightEquipTrack* track; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryAssignBasicEquip_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS45_0___TRYASSIGNBASICEQUIP_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __TryAssignBasicEquip_g___NotAvailable_2(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS45_0___TRYASSIGNBASICEQUIP_G___NOTAVAILABLE_2_OFFSET))(this, a1);
		}
	};
}
