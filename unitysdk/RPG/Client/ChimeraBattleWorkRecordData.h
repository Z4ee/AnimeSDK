#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C01BA129C3E40259;

#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C1B4DE0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_HPREMAINING_OFFSET UNITYSDK_OFFSET(0x1C1B5690)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1C1B56B0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C1B5640)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0x1C1B56D0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_WORKID_OFFSET UNITYSDK_OFFSET(0x1C1B5620)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_HPREMAINING_OFFSET UNITYSDK_OFFSET(0x1C1B56A0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1C1B56C0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_TURNCOST_OFFSET UNITYSDK_OFFSET(0x1C1B56E0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_WORKID_OFFSET UNITYSDK_OFFSET(0x1C1B5630)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C1B5700)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B56F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraBattleWorkRecordData_TypeDefinitionIndex = 63513;

	class ChimeraBattleWorkRecordData : public ::System::Object
	{
	public:
		::System::Int32 _HPRemaining_k__BackingField; // 0x10
		::System::UInt32 _WorkID_k__BackingField; // 0x14
		::System::Boolean _IsDirty_k__BackingField; // 0x18
		::System::UInt32 _TurnCost_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WorkID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_WORKID_OFFSET))(this);
		}

		::System::Void set_WorkID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_WORKID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Int32 get_HPRemaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_HPREMAINING_OFFSET))(this);
		}

		::System::Void set_HPRemaining(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_HPREMAINING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_ISDIRTY_OFFSET))(this, a1);
		}

		::System::UInt32 get_TurnCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_TURNCOST_OFFSET))(this);
		}

		::System::Void set_TurnCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_TURNCOST_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChimeraBattleWorkRecordData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraBattleWorkRecordData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Update(::Class_2_C01BA129C3E40259* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C01BA129C3E40259*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_UPDATE_OFFSET))(this, a1);
		}
	};
}
