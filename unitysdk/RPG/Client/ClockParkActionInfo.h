#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_77A269AAA926CB22;
namespace RPG::Client { class ClockParkActionDataItem; }
namespace RPG::Client { class ClockParkBuffInfo; }
namespace RPG::Client { class ClockParkCardInfo; }
namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkEffectDataItem; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace RPG::Client { class ClockParkInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define RPG_CLIENT_CLOCKPARKACTIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC2AFB0)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_GET_ONCARDACTION_OFFSET UNITYSDK_OFFSET(0xCC2BA60)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_GET_ONCARDEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xCC2BAB0)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_GET_ONCARDSUCCESSEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xCC2BB00)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0xCC2AE30)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_REFRESHCARDEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xCC2B440)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_SYNCACTION_OFFSET UNITYSDK_OFFSET(0xCC2B100)
#define RPG_CLIENT_CLOCKPARKACTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCC2BB50)
#define RPG_CLIENT_CLOCKPARKACTIONINFO__SYNCACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xCC2B170)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkActionInfo_TypeDefinitionIndex = 61571;

	class ClockParkActionInfo : public ::System::Object
	{
	public:
		::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>* _EffectDataItemPool; // 0x10
		::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>* _ActionDataItemPool; // 0x18
		::RPG::Client::ClockParkInstance* _OwnerInstance; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _GainBuffIDList; // 0x28
		::Class_1_77A269AAA926CB22* OnCardActionContainer; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ClockParkInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAction(::RPG::Client::ClockParkCardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_SYNCACTION_OFFSET))(this, a1);
		}

		::System::Void RefreshCardEffectResult(::RPG::Client::ClockParkCardItem* a1, ::RPG::Client::ClockParkEffectResult*& a2, ::RPG::Client::ClockParkEffectResult*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*, ::RPG::Client::ClockParkEffectResult*&, ::RPG::Client::ClockParkEffectResult*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_REFRESHCARDEFFECTRESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SyncActionInternal(::Class_1_77A269AAA926CB22* a1, ::RPG::Client::ClockParkCardInfo* a2, ::RPG::Client::ClockParkBuffInfo* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_77A269AAA926CB22*, ::RPG::Client::ClockParkCardInfo*, ::RPG::Client::ClockParkBuffInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO__SYNCACTIONINTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>* get_OnCardAction()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_GET_ONCARDACTION_OFFSET))(this);
		}

		::RPG::Client::ClockParkEffectResult* get_OnCardEffectResult()
		{
			return ((::RPG::Client::ClockParkEffectResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_GET_ONCARDEFFECTRESULT_OFFSET))(this);
		}

		::RPG::Client::ClockParkEffectResult* get_OnCardSuccessEffectResult()
		{
			return ((::RPG::Client::ClockParkEffectResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_GET_ONCARDSUCCESSEFFECTRESULT_OFFSET))(this);
		}
	};
}
