#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_13C7B7FC007B24BE;
class Class_1_AE0CA897D782D638;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATEBYCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x997B630)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x997B010)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x997AED0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x997AEF0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x997AEE0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x997B5E0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA__SORTLIGHTCONEBYUSAGERATE_OFFSET UNITYSDK_OFFSET(0x997B970)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeRecommendData_TypeDefinitionIndex = 54357;

	class LightConeRecommendData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _EXPIRED_TIME = 0x258; // 0x0
		::System::Collections::Generic::List_1<::Class_1_AE0CA897D782D638*>* RecommendLightCones; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x18
		::System::UInt32 _TimeStamp; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_SET_AVATARID_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		static ::RPG::Client::LightConeRecommendData* Create(::Class_1_13C7B7FC007B24BE* rsp)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::Class_1_13C7B7FC007B24BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATE_OFFSET))(rsp);
		}

		static ::RPG::Client::LightConeRecommendData* CreateByConfigData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATEBYCONFIGDATA_OFFSET))(avatarID);
		}

		static ::System::Int32 _SortLightConeByUsageRate(::Class_1_AE0CA897D782D638* lhs, ::Class_1_AE0CA897D782D638* rhs)
		{
			return ((::System::Int32(*)(::Class_1_AE0CA897D782D638*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA__SORTLIGHTCONEBYUSAGERATE_OFFSET))(lhs, rhs);
		}
	};
}
