#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x19EC42A0)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19EC41E0)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x19EC4190)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0x19EC3460)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__ADDPROMOTIONDATA_OFFSET UNITYSDK_OFFSET(0x19EC4550)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CANTAKEPROMOTIONREWARD_OFFSET UNITYSDK_OFFSET(0x19EC3BB0)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CLEARSTATUS_OFFSET UNITYSDK_OFFSET(0x19EC3B00)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC46A0)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__ONPROMOTIONREWARDREDDOTUPDATE_OFFSET UNITYSDK_OFFSET(0x19EC4500)
#define RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__UPDATEPROMOTIONLIST_OFFSET UNITYSDK_OFFSET(0x19EC3CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPromotionTakeRewardRedDotFilter_TypeDefinitionIndex = 66826;

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

		::System::Void _OnPromotionRewardRedDotUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__ONPROMOTIONREWARDREDDOTUPDATE_OFFSET))(this, a1);
		}

		::System::Void _ClearStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CLEARSTATUS_OFFSET))(this);
		}

		::System::Boolean _CanTakePromotionReward(::System::UInt32 a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__CANTAKEPROMOTIONREWARD_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdatePromotionList(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__UPDATEPROMOTIONLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPromotionData(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONTAKEREWARDREDDOTFILTER__ADDPROMOTIONDATA_OFFSET))(this, a1, a2);
		}
	};
}
