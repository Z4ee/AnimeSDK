#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_DCE302F7FD05DE84_2;
namespace RPG::Client { class ParkourLevel; }
namespace RPG::Client { class ParkourRank; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PARKOURSETTLEMENT_BUILDCHARACTERRANKS_OFFSET UNITYSDK_OFFSET(0xC342080)
#define RPG_CLIENT_PARKOURSETTLEMENT_BUILDPLAYERRANK_OFFSET UNITYSDK_OFFSET(0xC341F70)
#define RPG_CLIENT_PARKOURSETTLEMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xC346730)
#define RPG_CLIENT_PARKOURSETTLEMENT_GETRANKBYINDEX_OFFSET UNITYSDK_OFFSET(0xC346870)
#define RPG_CLIENT_PARKOURSETTLEMENT_GET_COUNTOFRANKS_OFFSET UNITYSDK_OFFSET(0xC3466E0)
#define RPG_CLIENT_PARKOURSETTLEMENT_GET_HASBROKENRECORD_OFFSET UNITYSDK_OFFSET(0xC3466C0)
#define RPG_CLIENT_PARKOURSETTLEMENT_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xC3465F0)
#define RPG_CLIENT_PARKOURSETTLEMENT_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xC3466A0)
#define RPG_CLIENT_PARKOURSETTLEMENT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC3465B0)
#define RPG_CLIENT_PARKOURSETTLEMENT_GET_ORDERSUFFIX_OFFSET UNITYSDK_OFFSET(0xC346610)
#define RPG_CLIENT_PARKOURSETTLEMENT_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xC346590)
#define RPG_CLIENT_PARKOURSETTLEMENT_GET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0xC346570)
#define RPG_CLIENT_PARKOURSETTLEMENT_GET_RECORD_OFFSET UNITYSDK_OFFSET(0xC3465D0)
#define RPG_CLIENT_PARKOURSETTLEMENT_SETLEVELINFO_OFFSET UNITYSDK_OFFSET(0xC3423A0)
#define RPG_CLIENT_PARKOURSETTLEMENT_SET_HASBROKENRECORD_OFFSET UNITYSDK_OFFSET(0xC3466D0)
#define RPG_CLIENT_PARKOURSETTLEMENT_SET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xC346600)
#define RPG_CLIENT_PARKOURSETTLEMENT_SET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xC3466B0)
#define RPG_CLIENT_PARKOURSETTLEMENT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC3465C0)
#define RPG_CLIENT_PARKOURSETTLEMENT_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xC3465A0)
#define RPG_CLIENT_PARKOURSETTLEMENT_SET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0xC346580)
#define RPG_CLIENT_PARKOURSETTLEMENT_SET_RECORD_OFFSET UNITYSDK_OFFSET(0xC3465E0)
#define RPG_CLIENT_PARKOURSETTLEMENT_SORTRANKS_OFFSET UNITYSDK_OFFSET(0xC3421E0)
#define RPG_CLIENT_PARKOURSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC346820)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourSettlement_TypeDefinitionIndex = 57850;

	class ParkourSettlement : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* _Ranks; // 0x10
		::RPG::Client::ParkourRank* _PlayerRank_k__BackingField; // 0x18
		::RPG::Client::ParkourLevel* _Level_k__BackingField; // 0x20
		::System::Int32 _Order_k__BackingField; // 0x28
		::System::UInt32 _Record_k__BackingField; // 0x2C
		::System::Boolean _HasBrokenRecord_k__BackingField; // 0x30
		::System::Boolean _IsSuccess_k__BackingField; // 0x31
		::System::Boolean _IsFirstPass_k__BackingField; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT__CTOR_OFFSET))(this);
		}

		::RPG::Client::ParkourRank* get_PlayerRank()
		{
			return ((::RPG::Client::ParkourRank*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GET_PLAYERRANK_OFFSET))(this);
		}

		::System::Void set_PlayerRank(::RPG::Client::ParkourRank* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_SET_PLAYERRANK_OFFSET))(this, a1);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_SET_ORDER_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourLevel* get_Level()
		{
			return ((::RPG::Client::ParkourLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Record()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GET_RECORD_OFFSET))(this);
		}

		::System::Void set_Record(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_SET_RECORD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GET_ISFIRSTPASS_OFFSET))(this);
		}

		::System::Void set_IsFirstPass(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_SET_ISFIRSTPASS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OrderSuffix()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GET_ORDERSUFFIX_OFFSET))(this);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Void set_IsSuccess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_SET_ISSUCCESS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasBrokenRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GET_HASBROKENRECORD_OFFSET))(this);
		}

		::System::Void set_HasBrokenRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_SET_HASBROKENRECORD_OFFSET))(this, a1);
		}

		::System::Int32 get_CountOfRanks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GET_COUNTOFRANKS_OFFSET))(this);
		}

		static ::RPG::Client::ParkourSettlement* Create(::Class_1_DCE302F7FD05DE84_2* a1)
		{
			return ((::RPG::Client::ParkourSettlement*(*)(::Class_1_DCE302F7FD05DE84_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_CREATE_OFFSET))(a1);
		}

		::System::Void BuildPlayerRank(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_BUILDPLAYERRANK_OFFSET))(this, a1, a2);
		}

		::System::Void BuildCharacterRanks(::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_BUILDCHARACTERRANKS_OFFSET))(this, a1);
		}

		::System::Void SetLevelInfo(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_SETLEVELINFO_OFFSET))(this, a1);
		}

		::System::Void SortRanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_SORTRANKS_OFFSET))(this);
		}

		::RPG::Client::ParkourRank* GetRankByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ParkourRank*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT_GETRANKBYINDEX_OFFSET))(this, a1);
		}
	};
}
