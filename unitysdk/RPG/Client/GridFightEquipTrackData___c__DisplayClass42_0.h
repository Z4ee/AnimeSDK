#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9810110)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0___TRYASSIGNBASICEQUIP_B__0_OFFSET UNITYSDK_OFFSET(0x9810A60)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0___TRYASSIGNBASICEQUIP_G___NOTAVAILABLE_2_OFFSET UNITYSDK_OFFSET(0x9810AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass42_0_TypeDefinitionIndex = 53063;

	class GridFightEquipTrackData___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* usedUIDs; // 0x10
		::RPG::Client::GridFightEquipTrack* track; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryAssignBasicEquip_b__0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0___TRYASSIGNBASICEQUIP_B__0_OFFSET))(this, x);
		}

		::System::Boolean __TryAssignBasicEquip_g___NotAvailable_2(::RPG::Client::GridFightEquipItemData* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0___TRYASSIGNBASICEQUIP_G___NOTAVAILABLE_2_OFFSET))(this, equip);
		}
	};
}
