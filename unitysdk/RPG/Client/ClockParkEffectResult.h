#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkEffectDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKEFFECTRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DAE50)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT_GET_OFFSET UNITYSDK_OFFSET(0xB6D6CF0)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT_HASNEGATIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xB6D9570)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT_HASPOSITIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xB6D9460)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT_MERGEFROMEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xB6DC430)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT_MERGE_OFFSET UNITYSDK_OFFSET(0xB6DBC90)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT_REFRESHATTRIBUTEBUFF_OFFSET UNITYSDK_OFFSET(0xB6DB780)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DBC80)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT__MERGEATTRIBUTEBUFF_OFFSET UNITYSDK_OFFSET(0xB6DC3C0)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT__MERGEATTRIBUTECHANGEPERCENT_OFFSET UNITYSDK_OFFSET(0xB6DC180)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT__MERGEATTRIBUTECHANGE_OFFSET UNITYSDK_OFFSET(0xB6DBD00)
#define RPG_CLIENT_CLOCKPARKEFFECTRESULT__MERGEATTRIBUTEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xB6DBF40)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkEffectResult_TypeDefinitionIndex = 57499;

	class ClockParkEffectResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GainBuff; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Int32>* AttributeChangePercent; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Int32>* AttributeChange; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Boolean>* AttributeBuff; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Int32>* AttributeMultiplier; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ClockParkEffectResult* Get()
		{
			return ((::RPG::Client::ClockParkEffectResult*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT_GET_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT_CLEAR_OFFSET))(this);
		}

		::System::Void Merge(::RPG::Client::ClockParkEffectResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT_MERGE_OFFSET))(this, a1);
		}

		::System::Void MergeFromEffectList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT_MERGEFROMEFFECTLIST_OFFSET))(this, a1);
		}

		::System::Void RefreshAttributeBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT_REFRESHATTRIBUTEBUFF_OFFSET))(this);
		}

		::System::Void _MergeAttributeChange(::RPG::Client::ClockParkEffectResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT__MERGEATTRIBUTECHANGE_OFFSET))(this, a1);
		}

		::System::Void _MergeAttributeMultiplier(::RPG::Client::ClockParkEffectResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT__MERGEATTRIBUTEMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Void _MergeAttributeChangePercent(::RPG::Client::ClockParkEffectResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT__MERGEATTRIBUTECHANGEPERCENT_OFFSET))(this, a1);
		}

		::System::Void _MergeAttributeBuff(::RPG::Client::ClockParkEffectResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT__MERGEATTRIBUTEBUFF_OFFSET))(this, a1);
		}

		::System::Boolean HasPositiveEffect(::RPG::Client::ClockParkAttributeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT_HASPOSITIVEEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean HasNegativeEffect(::RPG::Client::ClockParkAttributeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTRESULT_HASNEGATIVEEFFECT_OFFSET))(this, a1);
		}
	};
}
