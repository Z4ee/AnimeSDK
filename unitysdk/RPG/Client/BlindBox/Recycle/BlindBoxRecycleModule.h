#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_0146A994B6AED8EF;
class Class_1_7AB88D713F5121B3_60;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::BlindBox::Recycle { class BlindBoxDustExchangeInfo; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CALCULATERECYCLEDUSTNUM_OFFSET UNITYSDK_OFFSET(0xC889040)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CANRECYCLE_OFFSET UNITYSDK_OFFSET(0xC8892D0)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETDUSTEXCHANGEINFO_OFFSET UNITYSDK_OFFSET(0xC88B190)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETRECYCLABLECANDIDATES_OFFSET UNITYSDK_OFFSET(0xC889480)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETRECYCLEREWARDPREVIEW_OFFSET UNITYSDK_OFFSET(0xC8890A0)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_DUSTITEMID_OFFSET UNITYSDK_OFFSET(0xC889280)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_KEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xC88BA70)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_MAXRECYCLECOUNT_OFFSET UNITYSDK_OFFSET(0xC88BAC0)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_RECYCLEACTIVITYBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC88BC30)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_RECYCLEACTIVITYENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC88BB60)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_TIPSCOUNTDOWNDAYS_OFFSET UNITYSDK_OFFSET(0xC88BB10)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC888E60)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_RECYCLEBLINDBOXPETS_OFFSET UNITYSDK_OFFSET(0xC88A520)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC888F60)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC888E40)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ISRECYCLABLECANDIDATE_OFFSET UNITYSDK_OFFSET(0xC88A190)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ONRECYCLEBLINDBOXPETSCRSP_OFFSET UNITYSDK_OFFSET(0xC88B560)

namespace RPG::Client::BlindBox::Recycle
{
	inline static constexpr unsigned int BlindBoxRecycleModule_TypeDefinitionIndex = 74905;

	class BlindBoxRecycleModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_7AB88D713F5121B3_60* _Consts; // 0x10
		::Class_1_0146A994B6AED8EF* _DustCalculator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::UInt32 CalculateRecycleDustNum(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CALCULATERECYCLEDUSTNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRecycleRewardPreview(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETRECYCLEREWARDPREVIEW_OFFSET))(this, a1);
		}

		::System::Boolean CanRecycle(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CANRECYCLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* GetRecyclableCandidates()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETRECYCLABLECANDIDATES_OFFSET))(this);
		}

		::System::Boolean _IsRecyclableCandidate(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ISRECYCLABLECANDIDATE_OFFSET))(this, a1);
		}

		::System::Void RecycleBlindBoxPets(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_RECYCLEBLINDBOXPETS_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Recycle::BlindBoxDustExchangeInfo* GetDustExchangeInfo()
		{
			return ((::RPG::Client::BlindBox::Recycle::BlindBoxDustExchangeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETDUSTEXCHANGEINFO_OFFSET))(this);
		}

		::System::Void _OnRecycleBlindBoxPetScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ONRECYCLEBLINDBOXPETSCRSP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_KeepCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_KEEPCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_DustItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_DUSTITEMID_OFFSET))(this);
		}

		::System::UInt32 get_MaxRecycleCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_MAXRECYCLECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TipsCountdownDays()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_TIPSCOUNTDOWNDAYS_OFFSET))(this);
		}

		::System::UInt32 get_RecycleActivityEndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_RECYCLEACTIVITYENDTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_RecycleActivityBeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_RECYCLEACTIVITYBEGINTIMESTAMP_OFFSET))(this);
		}
	};
}
