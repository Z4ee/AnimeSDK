#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C01BA129C3E40259;

#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB670610)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_HPREMAINING_OFFSET UNITYSDK_OFFSET(0xB670E80)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xB670EA0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB670E70)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0xB670EC0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_WORKID_OFFSET UNITYSDK_OFFSET(0xB670E50)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_HPREMAINING_OFFSET UNITYSDK_OFFSET(0xB670E90)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xB670EB0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_TURNCOST_OFFSET UNITYSDK_OFFSET(0xB670ED0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_WORKID_OFFSET UNITYSDK_OFFSET(0xB670E60)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xB670EF0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB670EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraBattleWorkRecordData_TypeDefinitionIndex = 59389;

	class ChimeraBattleWorkRecordData : public ::System::Object
	{
	public:
		::System::Int32 _HPRemaining_k__BackingField; // 0x10
		::System::Boolean _IsDirty_k__BackingField; // 0x14
		::System::UInt32 _WorkID_k__BackingField; // 0x18
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
