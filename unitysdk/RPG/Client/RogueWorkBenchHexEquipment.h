#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1000;
namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xDFCE090)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xDFCE040)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xDFCE120)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PRESLOTCNT_OFFSET UNITYSDK_OFFSET(0xDFCDF70)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xDFCDF90)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_SLOTCNT_OFFSET UNITYSDK_OFFSET(0xDFCDF50)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xDFCE0D0)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0xDFCDFE0)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xDFCE130)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PRESLOTCNT_OFFSET UNITYSDK_OFFSET(0xDFCDF80)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xDFCDFA0)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_SLOTCNT_OFFSET UNITYSDK_OFFSET(0xDFCDF60)
#define RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xDFCDFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchHexEquipment_TypeDefinitionIndex = 67355;

	class RogueWorkBenchHexEquipment : public ::System::Object
	{
	public:
		::System::UInt32 _FuncID; // 0x10
		::System::Boolean _IsDisable_k__BackingField; // 0x14
		::System::UInt32 _PropEntityID_k__BackingField; // 0x18
		::System::UInt32 _PreSlotCnt_k__BackingField; // 0x1C
		::System::UInt32 _SlotCnt_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_1000* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_1000*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_SlotCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_SLOTCNT_OFFSET))(this);
		}

		::System::Void set_SlotCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_SLOTCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PreSlotCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PRESLOTCNT_OFFSET))(this);
		}

		::System::Void set_PreSlotCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PRESLOTCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_PROPENTITYID_OFFSET))(this);
		}

		::System::Void set_PropEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_PROPENTITYID_OFFSET))(this, a1);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchHexEquipment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_REFRESH_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void set_IsDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHHEXEQUIPMENT_SET_ISDISABLE_OFFSET))(this, a1);
		}
	};
}
