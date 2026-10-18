#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTEQUIPBONUSEVENT_GET_EQUIPPEDBYROLE_OFFSET UNITYSDK_OFFSET(0xD103D10)
#define RPG_CLIENT_GRIDFIGHTEQUIPBONUSEVENT_GET_EQUIPPEDUID_OFFSET UNITYSDK_OFFSET(0xD103CA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPBONUSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD103D60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipBonusEvent_TypeDefinitionIndex = 64939;

	class GridFightEquipBonusEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* EquippedRole; // 0x10
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x18
		::RPG::Client::GridFightEquipItemData* Equip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPBONUSEVENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EquippedUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPBONUSEVENT_GET_EQUIPPEDUID_OFFSET))(this);
		}

		::System::Boolean get_EquippedByRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPBONUSEVENT_GET_EQUIPPEDBYROLE_OFFSET))(this);
		}
	};
}
