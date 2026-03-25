#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_54;
namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xA3F0510)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA3F04C0)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PRESLOTCNT_OFFSET UNITYSDK_OFFSET(0xA3F0400)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xA3F0420)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_SLOTCNT_OFFSET UNITYSDK_OFFSET(0xA3F03E0)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA3F0550)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0xA3F0460)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PRESLOTCNT_OFFSET UNITYSDK_OFFSET(0xA3F0410)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xA3F0430)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_SLOTCNT_OFFSET UNITYSDK_OFFSET(0xA3F03F0)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F0440)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchHexEquipment_TypeDefinitionIndex = 54871;

	class RogueWorkBenchHexEquipment : public ::System::Object
	{
	public:
		::System::UInt32 _PropEntityID_k__BackingField; // 0x10
		::System::UInt32 _SlotCnt_k__BackingField; // 0x14
		::System::UInt32 _PreSlotCnt_k__BackingField; // 0x18
		::System::UInt32 _FuncID; // 0x1C

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_99BD961747420BEB_54* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_99BD961747420BEB_54*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT__CTOR_OFFSET))(this, funcID, proto);
		}

		::System::UInt32 get_SlotCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_SLOTCNT_OFFSET))(this);
		}

		::System::Void set_SlotCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_SLOTCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_PreSlotCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PRESLOTCNT_OFFSET))(this);
		}

		::System::Void set_PreSlotCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PRESLOTCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_PropEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PROPENTITYID_OFFSET))(this);
		}

		::System::Void set_PropEntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PROPENTITYID_OFFSET))(this, value);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchHexEquipment* detail)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_REFRESH_OFFSET))(this, detail);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}
	};
}
