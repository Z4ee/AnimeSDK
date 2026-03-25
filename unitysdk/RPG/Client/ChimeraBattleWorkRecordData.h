#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7AF1D57CA4301272;

#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x938AB10)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_HPREMAINING_OFFSET UNITYSDK_OFFSET(0x938B3E0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x938B400)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x938B3D0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0x938B420)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_WORKID_OFFSET UNITYSDK_OFFSET(0x938B3B0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_HPREMAINING_OFFSET UNITYSDK_OFFSET(0x938B3F0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x938B410)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_TURNCOST_OFFSET UNITYSDK_OFFSET(0x938B430)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_WORKID_OFFSET UNITYSDK_OFFSET(0x938B3C0)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x938B450)
#define RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x938B440)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraBattleWorkRecordData_TypeDefinitionIndex = 51521;

	class ChimeraBattleWorkRecordData : public ::System::Object
	{
	public:
		::System::Int32 _HPRemaining_k__BackingField; // 0x10
		::System::UInt32 _TurnCost_k__BackingField; // 0x14
		::System::Boolean _IsDirty_k__BackingField; // 0x18
		::System::UInt32 _WorkID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WorkID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_WORKID_OFFSET))(this);
		}

		::System::Void set_WorkID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_WORKID_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Int32 get_HPRemaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_HPREMAINING_OFFSET))(this);
		}

		::System::Void set_HPRemaining(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_HPREMAINING_OFFSET))(this, value);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_ISDIRTY_OFFSET))(this, value);
		}

		::System::UInt32 get_TurnCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_GET_TURNCOST_OFFSET))(this);
		}

		::System::Void set_TurnCost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_SET_TURNCOST_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraBattleWorkRecordData* Create(::System::UInt32 workID)
		{
			return ((::RPG::Client::ChimeraBattleWorkRecordData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_CREATE_OFFSET))(workID);
		}

		::System::Void Update(::Class_2_7AF1D57CA4301272* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7AF1D57CA4301272*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEWORKRECORDDATA_UPDATE_OFFSET))(this, entity);
		}
	};
}
