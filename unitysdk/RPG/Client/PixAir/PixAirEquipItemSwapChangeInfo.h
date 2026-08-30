#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirEquipItemChangeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1C8414E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1C8415A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_SRCITEM_OFFSET UNITYSDK_OFFSET(0x1C841620)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_SRCPOS_OFFSET UNITYSDK_OFFSET(0x1C8415E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_TARGETITEM_OFFSET UNITYSDK_OFFSET(0x1C841640)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_TARGETPOS_OFFSET UNITYSDK_OFFSET(0x1C841600)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_SET_SRCITEM_OFFSET UNITYSDK_OFFSET(0x1C841630)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_SET_SRCPOS_OFFSET UNITYSDK_OFFSET(0x1C8415F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_SET_TARGETITEM_OFFSET UNITYSDK_OFFSET(0x1C841650)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_SET_TARGETPOS_OFFSET UNITYSDK_OFFSET(0x1C841610)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C841590)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipItemSwapChangeInfo_TypeDefinitionIndex = 78792;

	class PixAirEquipItemSwapChangeInfo : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirEquipInstance* _TargetItem_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirEquipInstance* _SrcItem_k__BackingField; // 0x18
		::System::Int32 _SrcPos_k__BackingField; // 0x20
		::RPG::Client::PixAir::PixAirEquipItemChangeType _ChangeType; // 0x24
		::System::Int32 _TargetPos_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipItemSwapChangeInfo* Create(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::PixAir::PixAirEquipInstance* a3, ::RPG::Client::PixAir::PixAirEquipInstance* a4, ::RPG::Client::PixAir::PixAirEquipItemChangeType a5)
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemSwapChangeInfo*(*)(::System::Int32, ::System::Int32, ::RPG::Client::PixAir::PixAirEquipInstance*, ::RPG::Client::PixAir::PixAirEquipInstance*, ::RPG::Client::PixAir::PixAirEquipItemChangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::RPG::Client::PixAir::PixAirEquipItemChangeType get_ChangeType()
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemChangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_CHANGETYPE_OFFSET))(this);
		}

		::System::Int32 get_SrcPos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_SRCPOS_OFFSET))(this);
		}

		::System::Void set_SrcPos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_SET_SRCPOS_OFFSET))(this, a1);
		}

		::System::Int32 get_TargetPos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_TARGETPOS_OFFSET))(this);
		}

		::System::Void set_TargetPos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_SET_TARGETPOS_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* get_SrcItem()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_SRCITEM_OFFSET))(this);
		}

		::System::Void set_SrcItem(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_SET_SRCITEM_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* get_TargetItem()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_GET_TARGETITEM_OFFSET))(this);
		}

		::System::Void set_TargetItem(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMSWAPCHANGEINFO_SET_TARGETITEM_OFFSET))(this, a1);
		}
	};
}
