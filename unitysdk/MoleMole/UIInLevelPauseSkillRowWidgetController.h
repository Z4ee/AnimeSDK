#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_FE222B85F7CE3D1B;
class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_142;
class Class_2_208CC9941471731A_532;
class Class_2_208CC9941471731A_707;
class Class_2_E0691DCD748D31EC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRoleSkillAttributeRowChildWindowController; }
namespace MoleMole { class UIRoleSkillInfoRowChildWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1828E7F0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GETAVATARAWAKENINFO_OFFSET UNITYSDK_OFFSET(0x1828F9E0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GETSKILLDISPLAYLEVELANDTALENTADD_OFFSET UNITYSDK_OFFSET(0x1828F170)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GETSKILLLEVELANDTALENTADD_OFFSET UNITYSDK_OFFSET(0x1828FBB0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1828E6E0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1828E770)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1828E610)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1828E670)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1828EA20)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHDESC_OFFSET UNITYSDK_OFFSET(0x1828F540)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x1828FC90)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHTITLE_OFFSET UNITYSDK_OFFSET(0x1828EC50)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1828F1C0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_SETFOLD_OFFSET UNITYSDK_OFFSET(0x18290420)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18290A50)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18290B80)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18290C10)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18290CA0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18290D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillRowWidgetController_TypeDefinitionIndex = 83562;

	class UIInLevelPauseSkillRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E0691DCD748D31EC* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_532*>* skillDescTemplates; // 0x2C8
		::Class_2_208CC9941471731A_142* passiveTemplate; // 0x2D0
		::Class_2_208CC9941471731A_707* passiveDesTemplate; // 0x2D8
		::System::Collections::Generic::List_1<::Class_1_FE222B85F7CE3D1B*>* groups; // 0x2E0
		::System::Boolean isFold; // 0x2E8
		::System::Int32 avatarID; // 0x2EC
		::System::Boolean isShowingAttribute; // 0x2F0
		::Class_2_1824EF69C8E376A3* avatarItem; // 0x2F8
		::Share::EAvatarSkillType skillType; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillInfoRowChildWindowController*>* _infoItemCtrlList; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillAttributeRowChildWindowController*>* _attributeCtrlList; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void RefreshAttribute(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHATTRIBUTE_OFFSET))(this, init);
		}

		::System::Void RefreshTitle(::Share::EAvatarSkillType type)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHTITLE_OFFSET))(this, type);
		}

		::System::Void Refresh(::System::Boolean init, ::Class_2_1824EF69C8E376A3* avatarItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESH_OFFSET))(this, init, avatarItem);
		}

		::System::Void GetAvatarAwakenInfo(::System::Int32& awakenDescCount, ::System::String*& awakenTitle, ::System::String*& awakenDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GETAVATARAWAKENINFO_OFFSET))(this, awakenDescCount, awakenTitle, awakenDesc);
		}

		::System::Void RefreshDesc(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHDESC_OFFSET))(this, init);
		}

		::System::Void RefreshInfo(::Share::EAvatarSkillType type, ::System::Int32 avatarID, ::Class_2_1824EF69C8E376A3* avatarItem)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EAvatarSkillType, ::System::Int32, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, type, avatarID, avatarItem);
		}

		::System::Void SetFold(::System::Boolean fold)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_SETFOLD_OFFSET))(this, fold);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetSkillDisplayLevelAndTalentAdd(::Share::EAvatarSkillType skillType)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GETSKILLDISPLAYLEVELANDTALENTADD_OFFSET))(this, skillType);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetSkillLevelAndTalentAdd(::Share::EAvatarSkillType skillType)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GETSKILLLEVELANDTALENTADD_OFFSET))(this, skillType);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
