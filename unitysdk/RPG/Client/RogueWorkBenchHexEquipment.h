#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_56;
namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xB128120)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xB1280D0)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PRESLOTCNT_OFFSET UNITYSDK_OFFSET(0xB128000)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xB128020)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_SLOTCNT_OFFSET UNITYSDK_OFFSET(0xB127FE0)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xB128160)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0xB128070)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PRESLOTCNT_OFFSET UNITYSDK_OFFSET(0xB128010)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xB128030)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_SLOTCNT_OFFSET UNITYSDK_OFFSET(0xB127FF0)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB128040)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchHexEquipment_TypeDefinitionIndex = 62059;

	class RogueWorkBenchHexEquipment : public ::System::Object
	{
	public:
		::System::UInt32 _PreSlotCnt_k__BackingField; // 0x10
		::System::UInt32 _FuncID; // 0x14
		::System::UInt32 _PropEntityID_k__BackingField; // 0x18
		::System::UInt32 _SlotCnt_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_4BC858D7C27E10ED_56* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_4BC858D7C27E10ED_56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT__CTOR_OFFSET))(this, funcID, proto);
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
