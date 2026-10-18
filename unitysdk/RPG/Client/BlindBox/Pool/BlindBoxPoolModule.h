#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/BlindBoxCostCalculateResult.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/BlindBoxCostExchangeRatio.h"

class Class_1_34F7D3B2155BEA5D;
class Class_1_5C58BFDDC0405116;
class Class_1_D1B2A8C2387E850A;
class Class_1_E5FACDA100213DA2;
class Class_1_F3CA30716D4FAF92_4;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class TimerManager; }
namespace RPG::Client::BlindBox::Pool { class BlindBoxPoolRepository; }
namespace RPG::Client::BlindBox::Pool { class IBlindBox; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxPool; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxPoolRepository; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_CALCULATEOPENBLINDBOXSETCOST_OFFSET UNITYSDK_OFFSET(0xC882A20)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_CALCULATEOPENONEBLINDBOXCOST_OFFSET UNITYSDK_OFFSET(0xC8829A0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8815C0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_GETCOSTEXCHANGERATIO_OFFSET UNITYSDK_OFFSET(0xC882AB0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_GETNEWPOOLIDLIST_OFFSET UNITYSDK_OFFSET(0xC882DE0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_GET_MCOINITEM_OFFSET UNITYSDK_OFFSET(0xC8854B0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_GET_POOLS_OFFSET UNITYSDK_OFFSET(0xC885470)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_HASCURPOOLGACHATICKET_OFFSET UNITYSDK_OFFSET(0xC883D00)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC880F70)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_ISPOOLSEEN_OFFSET UNITYSDK_OFFSET(0xC8838F0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_MARKPOOLSEEN_OFFSET UNITYSDK_OFFSET(0xC883B00)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_OPENBLINDBOXSET_OFFSET UNITYSDK_OFFSET(0xC882CA0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_OPENONEBLINDBOX_OFFSET UNITYSDK_OFFSET(0xC882B20)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_SET_MCOINITEM_OFFSET UNITYSDK_OFFSET(0xC8854C0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC881930)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8817A0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC880D90)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__GETNEWPOOLIDLIST_B__13_0_OFFSET UNITYSDK_OFFSET(0xC8854D0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__LOGOPENBLINDBOX_OFFSET UNITYSDK_OFFSET(0xC884320)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ONBLINDBOXGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC881A00)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ONBLINDBOXOPENBOXSCRSP_OFFSET UNITYSDK_OFFSET(0xC8826D0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ONFEATURESWITCHED_OFFSET UNITYSDK_OFFSET(0xC882940)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ONPOOLSCHEDULEREACHED_OFFSET UNITYSDK_OFFSET(0xC8842A0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__REGISTERSCHEDULEWATCHERS_OFFSET UNITYSDK_OFFSET(0xC882030)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__REGISTERSCHEDULEWATCHER_OFFSET UNITYSDK_OFFSET(0xC884160)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__UNREGISTERALLSCHEDULEWATCHERS_OFFSET UNITYSDK_OFFSET(0xC881610)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxPoolModule_TypeDefinitionIndex = 74911;

	class BlindBoxPoolModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::TimerManager* _TimerManager; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _ScheduleWatchers; // 0x18
		::Class_1_D1B2A8C2387E850A* _CostCalculator; // 0x20
		::Class_1_5C58BFDDC0405116* _Consts; // 0x28
		::Class_1_E5FACDA100213DA2* _OpenResultFactory; // 0x30
		::RPG::Client::NetworkManager* _NetworkManager; // 0x38
		::RPG::Client::ItemData* _MCoinItem_k__BackingField; // 0x40
		::Class_1_34F7D3B2155BEA5D* _PoolFactory; // 0x48
		::RPG::Client::BlindBox::Pool::BlindBoxPoolRepository* _Pools; // 0x50
		::System::UInt32 _NextOpenReqSeqId; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnBlindBoxGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ONBLINDBOXGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBlindBoxOpenBoxScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ONBLINDBOXOPENBOXSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFeatureSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ONFEATURESWITCHED_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult CalculateOpenOneBlindBoxCost()
		{
			return ((::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_CALCULATEOPENONEBLINDBOXCOST_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult CalculateOpenBlindBoxSetCost()
		{
			return ((::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_CALCULATEOPENBLINDBOXSETCOST_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio GetCostExchangeRatio()
		{
			return ((::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_GETCOSTEXCHANGERATIO_OFFSET))(this);
		}

		::System::Void OpenOneBlindBox(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1, ::RPG::Client::BlindBox::Pool::IBlindBox* a2, ::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*, ::RPG::Client::BlindBox::Pool::IBlindBox*, ::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_OPENONEBLINDBOX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OpenBlindBoxSet(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1, ::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*, ::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_OPENBLINDBOXSET_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewPoolIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_GETNEWPOOLIDLIST_OFFSET))(this);
		}

		::System::Boolean IsPoolSeen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_ISPOOLSEEN_OFFSET))(this, a1);
		}

		::System::Void MarkPoolSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_MARKPOOLSEEN_OFFSET))(this, a1);
		}

		::System::Boolean HasCurPoolGachaTicket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_HASCURPOOLGACHATICKET_OFFSET))(this);
		}

		::System::Void _RegisterScheduleWatchers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__REGISTERSCHEDULEWATCHERS_OFFSET))(this);
		}

		::System::Void _RegisterScheduleWatcher(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__REGISTERSCHEDULEWATCHER_OFFSET))(this, a1, a2);
		}

		::System::Void _UnregisterAllScheduleWatchers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__UNREGISTERALLSCHEDULEWATCHERS_OFFSET))(this);
		}

		::System::Void _OnPoolScheduleReached(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__ONPOOLSCHEDULEREACHED_OFFSET))(this, a1);
		}

		::System::Void _LogOpenBlindBox(::Class_1_F3CA30716D4FAF92_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__LOGOPENBLINDBOX_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository* get_Pools()
		{
			return ((::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_GET_POOLS_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_MCoinItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_GET_MCOINITEM_OFFSET))(this);
		}

		::System::Void set_MCoinItem(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE_SET_MCOINITEM_OFFSET))(this, a1);
		}

		::System::Boolean _GetNewPoolIDList_b__13_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE__GETNEWPOOLIDLIST_B__13_0_OFFSET))(this, a1);
		}
	};
}
