#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkEffectDataItem; }
namespace RPG::GameCore { class ClockParkCardActionRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xA0941A0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_EFFECTLIST_OFFSET UNITYSDK_OFFSET(0xA094200)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_OWNERCARDREF_OFFSET UNITYSDK_OFFSET(0xA0941E0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA0941C0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_SUCCESSEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xA094220)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_ONNEW_OFFSET UNITYSDK_OFFSET(0xA094000)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xA093D00)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SETEFFECTDATAITEMPOOL_OFFSET UNITYSDK_OFFSET(0xA093C90)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xA0941B0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_EFFECTLIST_OFFSET UNITYSDK_OFFSET(0xA094210)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_OWNERCARDREF_OFFSET UNITYSDK_OFFSET(0xA0941F0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA0941D0)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_SUCCESSEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xA094230)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xA093A50)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CLEAREFFECTS_OFFSET UNITYSDK_OFFSET(0xA093D60)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CREATEEFFECTITEM_OFFSET UNITYSDK_OFFSET(0xA094040)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA094240)
#define RPG_CLIENT_CLOCKPARKACTIONDATAITEM__SYNCEFFECTS_OFFSET UNITYSDK_OFFSET(0xA093AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkActionDataItem_TypeDefinitionIndex = 56693;

	class ClockParkActionDataItem : public ::System::Object
	{
	public:
		static ::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>** StaticGet__EffectDataItemPoolRef()
		{
			return (::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkActionDataItem_TypeDefinitionIndex)->GetStaticField(0x5C830);
		}
		::RPG::GameCore::ClockParkCardActionRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* _EffectList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* _SuccessEffectList_k__BackingField; // 0x20
		::RPG::Client::ClockParkCardItem* _OwnerCardRef_k__BackingField; // 0x28
		::System::UInt32 _ActionID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 actionID, ::System::UInt32 dice, ::RPG::Client::ClockParkCardItem* ownerCard)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SYNC_OFFSET))(this, actionID, dice, ownerCard);
		}

		static ::System::Void SetEffectDataItemPool(::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>* pool)
		{
			return ((::System::Void(*)(::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkEffectDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SETEFFECTDATAITEMPOOL_OFFSET))(pool);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_ONNEW_OFFSET))(this);
		}

		::System::Void _SyncEffects(::System::UInt32 dice)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM__SYNCEFFECTS_OFFSET))(this, dice);
		}

		::RPG::Client::ClockParkEffectDataItem* _CreateEffectItem(::System::UInt32 effectID, ::System::UInt32 dice)
		{
			return ((::RPG::Client::ClockParkEffectDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CREATEEFFECTITEM_OFFSET))(this, effectID, dice);
		}

		::System::Void _ClearEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM__CLEAREFFECTS_OFFSET))(this);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_ACTIONID_OFFSET))(this, value);
		}

		::RPG::GameCore::ClockParkCardActionRow* get_Row()
		{
			return ((::RPG::GameCore::ClockParkCardActionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ClockParkCardActionRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkCardActionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkCardItem* get_OwnerCardRef()
		{
			return ((::RPG::Client::ClockParkCardItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_OWNERCARDREF_OFFSET))(this);
		}

		::System::Void set_OwnerCardRef(::RPG::Client::ClockParkCardItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_OWNERCARDREF_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* get_EffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_EFFECTLIST_OFFSET))(this);
		}

		::System::Void set_EffectList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_EFFECTLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* get_SuccessEffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_GET_SUCCESSEFFECTLIST_OFFSET))(this);
		}

		::System::Void set_SuccessEffectList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIONDATAITEM_SET_SUCCESSEFFECTLIST_OFFSET))(this, value);
		}
	};
}
