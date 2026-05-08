#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_208CC9941471731A_206;
class Class_2_208CC9941471731A_296;
class Class_2_208CC9941471731A_470;
class Class_2_7C8BC23A3027DD75;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_GETEXTRAPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1457DCD0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_GETPROPERTYFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1457DEF0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1457DB10)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1457DC10)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1457DC60)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1457DAB0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1457DBA0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWINLEVELBANGBOOSKILLDETAILVIEW_OFFSET UNITYSDK_OFFSET(0x1457F4E0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWPASSIVEDETAILVIEW_OFFSET UNITYSDK_OFFSET(0x1457E070)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWSKILLDETAILVIEW_OFFSET UNITYSDK_OFFSET(0x1457EF90)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWSKILLPASSIVEVIEW_OFFSET UNITYSDK_OFFSET(0x1457EBC0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1457FA10)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1457FBC0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1457FC50)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1457FC60)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1457FCF0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1457FD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController_TypeDefinitionIndex = 56500;

	class UIRoleSkillInfoRowChildWindowController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7C8BC23A3027DD75* _view; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _itemTalentCtrlList; // 0x2C0
		::System::String* newLine; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _popertyValueCache; // 0x2D0
		::UnityEngine::Color m_detailTxtGray; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Share::EPropertyType>* GetExtraPropertyType(::Class_2_208CC9941471731A_206* template_)
		{
			return ((::System::Collections::Generic::List_1<::Share::EPropertyType>*(*)(::PVOID, ::Class_2_208CC9941471731A_206*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_GETEXTRAPROPERTYTYPE_OFFSET))(this, template_);
		}

		::System::String* GetPropertyFormatString(::System::Int32 propID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_GETPROPERTYFORMATSTRING_OFFSET))(this, propID);
		}

		::System::Void ShowPassiveDetailView(::System::String* coreName, ::Class_2_208CC9941471731A_206* template_, ::System::Boolean isUnlocked, ::System::Boolean isPreviewMode, ::System::Boolean isFriendPreviewMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_208CC9941471731A_206*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWPASSIVEDETAILVIEW_OFFSET))(this, coreName, template_, isUnlocked, isPreviewMode, isFriendPreviewMode);
		}

		::System::Void ShowSkillPassiveView(::Class_2_208CC9941471731A_470* template_, ::System::Int32 index, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_470*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWSKILLPASSIVEVIEW_OFFSET))(this, template_, index, level);
		}

		::System::Void ShowSkillDetailView(::Class_2_208CC9941471731A_296* template_, ::Share::EAvatarSkillType type, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_296*, ::Share::EAvatarSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWSKILLDETAILVIEW_OFFSET))(this, template_, type, level);
		}

		::System::Void ShowInLevelBangbooSkillDetailView(::System::String* textTitle, ::System::String* detail, ::System::Int32 level, ::System::Boolean showTitle, ::System::Boolean setWhite)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWINLEVELBANGBOOSKILLDETAILVIEW_OFFSET))(this, textTitle, detail, level, showTitle, setWhite);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
