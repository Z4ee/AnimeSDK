#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9153ED0)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9153DC0)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x9153D40)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0x9153510)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__ADDPROMOTIONDATA_OFFSET UNITYSDK_OFFSET(0x91540C0)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CANTAKEPROMOTIONREWARD_OFFSET UNITYSDK_OFFSET(0x9153A40)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CLEARSTATUS_OFFSET UNITYSDK_OFFSET(0x9153960)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9154170)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__ONPROMOTIONREWARDREDDOTUPDATE_OFFSET UNITYSDK_OFFSET(0x9154070)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__UPDATEPROMOTIONLIST_OFFSET UNITYSDK_OFFSET(0x9153AE0)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9154330)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91542B0)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9154230)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPromotionTakeRewardRedDotFilter_TypeDefinitionIndex = 54373;

	class AvatarPromotionTakeRewardRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* CanTakePromotionRewardDict; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* CanTakePromotionRewardAvatarIdList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPromotionRewardRedDotUpdate(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__ONPROMOTIONREWARDREDDOTUPDATE_OFFSET))(this, arg);
		}

		::System::Void _ClearStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CLEARSTATUS_OFFSET))(this);
		}

		::System::Boolean _CanTakePromotionReward(::System::UInt32 promotionLevel, ::RPG::Client::IAvatarInfoProvider* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CANTAKEPROMOTIONREWARD_OFFSET))(this, promotionLevel, avatarData);
		}

		::System::Void _UpdatePromotionList(::RPG::Client::IAvatarInfoProvider* avatarData, ::System::Collections::Generic::List_1<::System::UInt32>* promotionLevelList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__UPDATEPROMOTIONLIST_OFFSET))(this, avatarData, promotionLevelList);
		}

		::System::Void _AddPromotionData(::System::UInt32 avatarID, ::System::Collections::Generic::List_1<::System::UInt32>* promotionLevelList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__ADDPROMOTIONDATA_OFFSET))(this, avatarID, promotionLevelList);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
