#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkEffectDataItem; }
namespace RPG::GameCore { class ClockParkCardActionRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xCC2AD20)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_EFFECTLIST_OFFSET UNITYSDK_OFFSET(0xCC2AD80)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_OWNERCARDREF_OFFSET UNITYSDK_OFFSET(0xCC2AD60)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCC2AD40)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_SUCCESSEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xCC2ADA0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_ONNEW_OFFSET UNITYSDK_OFFSET(0xCC2AB80)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xCC2A8A0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SETEFFECTDATAITEMPOOL_OFFSET UNITYSDK_OFFSET(0xCC2A850)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xCC2AD30)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_EFFECTLIST_OFFSET UNITYSDK_OFFSET(0xCC2AD90)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_OWNERCARDREF_OFFSET UNITYSDK_OFFSET(0xCC2AD70)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_ROW_OFFSET UNITYSDK_OFFSET(0xCC2AD50)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_SUCCESSEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xCC2ADB0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xCC2A570)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CLEAREFFECTS_OFFSET UNITYSDK_OFFSET(0xCC2A900)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CREATEEFFECTITEM_OFFSET UNITYSDK_OFFSET(0xCC2ABC0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCC2ADC0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM__SYNCEFFECTS_OFFSET UNITYSDK_OFFSET(0xCC2A600)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkActionDataItem_TypeDefinitionIndex = 61570;

	class ClockParkActionDataItem : public ::System::Object
	{
	public:
		static ::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>** StaticGet__EffectDataItemPoolRef()
		{
			return (::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkActionDataItem_TypeDefinitionIndex)->GetStaticField(0x54120);
		}
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* _EffectList_k__BackingField; // 0x10
		::RPG::Client::ClockParkCardItem* _OwnerCardRef_k__BackingField; // 0x18
		::RPG::GameCore::ClockParkCardActionRow* _Row_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* _SuccessEffectList_k__BackingField; // 0x28
		::System::UInt32 _ActionID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ClockParkCardItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SYNC_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void SetEffectDataItemPool(::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>* a1)
		{
			return ((::System::Void(*)(::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SETEFFECTDATAITEMPOOL_OFFSET))(a1);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_ONNEW_OFFSET))(this);
		}

		::System::Void _SyncEffects(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM__SYNCEFFECTS_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkEffectDataItem* _CreateEffectItem(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ClockParkEffectDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CREATEEFFECTITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _ClearEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CLEAREFFECTS_OFFSET))(this);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_ACTIONID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ClockParkCardActionRow* get_Row()
		{
			return ((::RPG::GameCore::ClockParkCardActionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ClockParkCardActionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkCardActionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkCardItem* get_OwnerCardRef()
		{
			return ((::RPG::Client::ClockParkCardItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_OWNERCARDREF_OFFSET))(this);
		}

		::System::Void set_OwnerCardRef(::RPG::Client::ClockParkCardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_OWNERCARDREF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* get_EffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_EFFECTLIST_OFFSET))(this);
		}

		::System::Void set_EffectList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_EFFECTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* get_SuccessEffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_SUCCESSEFFECTLIST_OFFSET))(this);
		}

		::System::Void set_SuccessEffectList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_SUCCESSEFFECTLIST_OFFSET))(this, a1);
		}
	};
}
