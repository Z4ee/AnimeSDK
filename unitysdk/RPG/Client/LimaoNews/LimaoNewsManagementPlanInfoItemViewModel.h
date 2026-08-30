#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsManagementPlanInfoItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C54A9B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C54AB10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_ISNEEDPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x1C54AB30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_NEXTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C54AB50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C54AAD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C54AAF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C54AB20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_ISNEEDPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x1C54AB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_NEXTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C54AB60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C54AAE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C54AB00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54AAB0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsManagementPlanInfoItemViewModel_TypeDefinitionIndex = 79101;

	class LimaoNewsManagementPlanInfoItemViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel* _NextViewModel_k__BackingField; // 0x20
		::RPG::Client::TextID _Text_k__BackingField; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemType _Type_k__BackingField; // 0x38
		::System::Boolean _IsNeedPlayUnlockAnimation_k__BackingField; // 0x3C
		::System::Boolean _IsFinished_k__BackingField; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel* Create(::RPG::Client::TextID a1, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemType a2, ::System::Boolean a3, ::System::Boolean a4, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel* a5)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*(*)(::RPG::Client::TextID, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemType, ::System::Boolean, ::System::Boolean, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::RPG::Client::TextID get_Text()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_TEXT_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemType get_Type()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNeedPlayUnlockAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_ISNEEDPLAYUNLOCKANIMATION_OFFSET))(this);
		}

		::System::Void set_IsNeedPlayUnlockAnimation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_ISNEEDPLAYUNLOCKANIMATION_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel* get_NextViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_GET_NEXTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_NextViewModel(::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOITEMVIEWMODEL_SET_NEXTVIEWMODEL_OFFSET))(this, a1);
		}
	};
}
