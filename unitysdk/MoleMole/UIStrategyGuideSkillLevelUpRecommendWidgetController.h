#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_770;
class Class_2_8B0B9219A9933B06;
class Class_3_16C92FCFDC4181B6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIStrategyGuideSkillRecommendRowWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_BUILDORDEREDSKILLSLOTS_OFFSET UNITYSDK_OFFSET(0x152385E0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ENSUREWISHLISTSKILLPLAN_OFFSET UNITYSDK_OFFSET(0x15238D60)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_GETDISPLAYLEVEL_OFFSET UNITYSDK_OFFSET(0x15238850)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_GETSKILLICONPATH_OFFSET UNITYSDK_OFFSET(0x15238A90)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15237D90)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15237E20)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15237B90)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15237D20)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_REFRESHSKILLROWS_OFFSET UNITYSDK_OFFSET(0x15237F00)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_REFRESHWITHAVATAR_OFFSET UNITYSDK_OFFSET(0x15237EA0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x152390B0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15238FD0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152392C0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15239350)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152393E0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15239470)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideSkillLevelUpRecommendWidgetController_TypeDefinitionIndex = 43730;

	class UIStrategyGuideSkillLevelUpRecommendWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>** StaticGet_TalentIconDir()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideSkillLevelUpRecommendWidgetController_TypeDefinitionIndex)->GetStaticField(0x3F1A0);
		}
		::Class_2_8B0B9219A9933B06* _view; // 0x2B8
		::Class_2_1824EF69C8E376A3* _avatarData; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>* _skillRowControllers; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWithAvatar(::Class_2_1824EF69C8E376A3* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_REFRESHWITHAVATAR_OFFSET))(this, avatarData);
		}

		::System::Void RefreshSkillRows()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_REFRESHSKILLROWS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Boolean>>* BuildOrderedSkillSlots(::Class_2_208CC9941471731A_770* cfg)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Boolean>>*(*)(::Class_2_208CC9941471731A_770*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_BUILDORDEREDSKILLSLOTS_OFFSET))(cfg);
		}

		static ::Class_3_16C92FCFDC4181B6* EnsureWishlistSkillPlan(::System::Int32 avatarId)
		{
			return ((::Class_3_16C92FCFDC4181B6*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_ENSUREWISHLISTSKILLPLAN_OFFSET))(avatarId);
		}

		::System::UInt32 GetDisplayLevel(::Share::EAvatarSkillType skillType, ::System::Boolean useMaxLevel, ::System::Int32 avatarId, ::System::Int32 awakeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::Share::EAvatarSkillType, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_GETDISPLAYLEVEL_OFFSET))(this, skillType, useMaxLevel, avatarId, awakeID);
		}

		::Foundation::AssetPath GetSkillIconPath(::Share::EAvatarSkillType skillType)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER_GETSKILLICONPATH_OFFSET))(this, skillType);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLLEVELUPRECOMMENDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
