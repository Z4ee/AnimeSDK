#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0EFB4F3865942669;
namespace RPG::Client { class ClockParkActionDataItem; }
namespace RPG::Client { class ClockParkBuffInfo; }
namespace RPG::Client { class ClockParkCardInfo; }
namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkEffectDataItem; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace RPG::Client { class ClockParkInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define RPG_CLIENT_CLOCKPARKACTIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA094460)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_GET_ONCARDACTION_OFFSET UNITYSDK_OFFSET(0xA094F60)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_GET_ONCARDEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xA094F80)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_GET_ONCARDSUCCESSEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xA094FA0)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA0942B0)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_REFRESHCARDEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xA094960)
#define RPG_CLIENT_CLOCKPARKACTIONINFO_SYNCACTION_OFFSET UNITYSDK_OFFSET(0xA0945E0)
#define RPG_CLIENT_CLOCKPARKACTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA094FC0)
#define RPG_CLIENT_CLOCKPARKACTIONINFO__SYNCACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA094650)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkActionInfo_TypeDefinitionIndex = 56694;

	class ClockParkActionInfo : public ::System::Object
	{
	public:
		::Class_1_0EFB4F3865942669* OnCardActionContainer; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _GainBuffIDList; // 0x18
		::RPG::Client::ClockParkInstance* _OwnerInstance; // 0x20
		::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>* _EffectDataItemPool; // 0x28
		::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>* _ActionDataItemPool; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ClockParkInstance* ownerInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_INIT_OFFSET))(this, ownerInstance);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAction(::RPG::Client::ClockParkCardInfo* cardInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_SYNCACTION_OFFSET))(this, cardInfo);
		}

		::System::Void RefreshCardEffectResult(::RPG::Client::ClockParkCardItem* cardItem, ::RPG::Client::ClockParkEffectResult*& result, ::RPG::Client::ClockParkEffectResult*& successResult)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*, ::RPG::Client::ClockParkEffectResult*&, ::RPG::Client::ClockParkEffectResult*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO_REFRESHCARDEFFECTRESULT_OFFSET))(this, cardItem, result, successResult);
		}

		::System::Void _SyncActionInternal(::Class_1_0EFB4F3865942669* actionContainer, ::RPG::Client::ClockParkCardInfo* cardInfo, ::RPG::Client::ClockParkBuffInfo* buffInfo, ::System::Boolean useGainBuff)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0EFB4F3865942669*, ::RPG::Client::ClockParkCardInfo*, ::RPG::Client::ClockParkBuffInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONINFO__SYNCACTIONINTERNAL_OFFSET))(this, actionContainer, cardInfo, buffInfo, useGainBuff);
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
