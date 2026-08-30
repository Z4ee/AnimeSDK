#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2EFC5657EFE4E7C9;
class Class_1_D40936EF3BF54118_81;
namespace RPG::Client::Recommend { class RelicSuitBigData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B652350)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B653DB0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B653DD0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1B651390)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_RELICSUITLIST_OFFSET UNITYSDK_OFFSET(0x1B653DF0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B653DC0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B653DE0)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_RELICSUITLIST_OFFSET UNITYSDK_OFFSET(0x1B653E00)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA__CREATERELICSUITLIST_OFFSET UNITYSDK_OFFSET(0x1B653E20)
#define RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B653E10)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int RelicRecommendBigData_TypeDefinitionIndex = 74357;

	class RelicRecommendBigData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _EXPIRED_TIME = 0x258; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>* _RelicSuitList_k__BackingField; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x18
		::System::Boolean _Enabled_k__BackingField; // 0x1C
		::System::UInt32 _TimeStamp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>* get_RelicSuitList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_GET_RELICSUITLIST_OFFSET))(this);
		}

		::System::Void set_RelicSuitList(::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_SET_RELICSUITLIST_OFFSET))(this, a1);
		}

		static ::RPG::Client::Recommend::RelicRecommendBigData* Create(::Class_1_2EFC5657EFE4E7C9* a1)
		{
			return ((::RPG::Client::Recommend::RelicRecommendBigData*(*)(::Class_1_2EFC5657EFE4E7C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>* _CreateRelicSuitList(::Class_1_D40936EF3BF54118_81* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Recommend::RelicSuitBigData*>*(*)(::Class_1_D40936EF3BF54118_81*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICRECOMMENDBIGDATA__CREATERELICSUITLIST_OFFSET))(a1);
		}
	};
}
