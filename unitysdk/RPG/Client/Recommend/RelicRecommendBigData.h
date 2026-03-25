#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_13C7B7FC007B24BE;
class Class_1_E7C4009BCC22497A_64;
namespace RPG::Client::Recommend { class RelicSuitBigData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA291FC0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA2936A0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA2936C0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xA291140)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_RELICSUITLIST_OFFSET UNITYSDK_OFFSET(0xA2936E0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA2936B0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA2936D0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_RELICSUITLIST_OFFSET UNITYSDK_OFFSET(0xA2936F0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA__CREATERELICSUITLIST_OFFSET UNITYSDK_OFFSET(0xA293710)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA293700)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int RelicRecommendBigData_TypeDefinitionIndex = 61215;

	class RelicRecommendBigData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _EXPIRED_TIME = 0x258; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>* _RelicSuitList_k__BackingField; // 0x10
		::System::UInt32 _TimeStamp; // 0x18
		::System::Boolean _Enabled_k__BackingField; // 0x1C
		::System::UInt32 _AvatarID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_AVATARID_OFFSET))(this, value);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>* get_RelicSuitList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_RELICSUITLIST_OFFSET))(this);
		}

		::System::Void set_RelicSuitList(::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_RELICSUITLIST_OFFSET))(this, value);
		}

		static ::RPG::Client::Recommend::RelicRecommendBigData* Create(::Class_1_13C7B7FC007B24BE* rsp)
		{
			return ((::RPG::Client::Recommend::RelicRecommendBigData*(*)(::Class_1_13C7B7FC007B24BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_CREATE_OFFSET))(rsp);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>* _CreateRelicSuitList(::Class_1_E7C4009BCC22497A_64* relicSuitRecommend)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>*(*)(::Class_1_E7C4009BCC22497A_64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA__CREATERELICSUITLIST_OFFSET))(relicSuitRecommend);
		}
	};
}
