#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2EFC5657EFE4E7C9;
class Class_1_AE0CA897D782D638;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATEBYCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xBD73100)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBD72A60)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xBD72920)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xBD72940)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xBD72930)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD730B0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA__SORTLIGHTCONEBYUSAGERATE_OFFSET UNITYSDK_OFFSET(0xBD734C0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeRecommendData_TypeDefinitionIndex = 62453;

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

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		static ::RPG::Client::LightConeRecommendData* Create(::Class_1_2EFC5657EFE4E7C9* a1)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::Class_1_2EFC5657EFE4E7C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LightConeRecommendData* CreateByConfigData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATEBYCONFIGDATA_OFFSET))(a1);
		}

		static ::System::Int32 _SortLightConeByUsageRate(::Class_1_AE0CA897D782D638* a1, ::Class_1_AE0CA897D782D638* a2)
		{
			return ((::System::Int32(*)(::Class_1_AE0CA897D782D638*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA__SORTLIGHTCONEBYUSAGERATE_OFFSET))(a1, a2);
		}
	};
}
