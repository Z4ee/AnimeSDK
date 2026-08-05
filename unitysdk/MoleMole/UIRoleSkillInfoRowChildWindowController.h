#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_208CC9941471731A_1180;
class Class_2_208CC9941471731A_190;
class Class_2_208CC9941471731A_443;
class Class_2_7C8BC23A3027DD75;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_GETEXTRAPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x179BC1D0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_GETPROPERTYFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x179BC3F0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179BBE00)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x179BC110)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179BC160)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179BBDA0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179BBE90)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWINLEVELBANGBOOSKILLDETAILVIEW_OFFSET UNITYSDK_OFFSET(0x179BDA10)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWPASSIVEDETAILVIEW_OFFSET UNITYSDK_OFFSET(0x179BC570)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWSKILLDETAILVIEW_OFFSET UNITYSDK_OFFSET(0x179BD4C0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWSKILLPASSIVEVIEW_OFFSET UNITYSDK_OFFSET(0x179BD0E0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179BDF40)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179BE0F0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x179BE180)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179BE190)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179BE220)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179BE2B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController_TypeDefinitionIndex = 62269;

	class UIRoleSkillInfoRowChildWindowController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7C8BC23A3027DD75* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _itemTalentCtrlList; // 0x2C8
		::System::String* newLine; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _popertyValueCache; // 0x2D8
		::UnityEngine::Color m_detailTxtGray; // 0x2E0

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

		::System::Collections::Generic::List_1<::Share::EPropertyType>* GetExtraPropertyType(::Class_2_208CC9941471731A_1180* template_)
		{
			return ((::System::Collections::Generic::List_1<::Share::EPropertyType>*(*)(::PVOID, ::Class_2_208CC9941471731A_1180*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_GETEXTRAPROPERTYTYPE_OFFSET))(this, template_);
		}

		::System::String* GetPropertyFormatString(::System::Int32 propID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_GETPROPERTYFORMATSTRING_OFFSET))(this, propID);
		}

		::System::Void ShowPassiveDetailView(::System::String* coreName, ::Class_2_208CC9941471731A_1180* template_, ::System::Boolean isUnlocked, ::System::Boolean isPreviewMode, ::System::Boolean isFriendPreviewMode, ::System::Boolean isSimple)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_208CC9941471731A_1180*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWPASSIVEDETAILVIEW_OFFSET))(this, coreName, template_, isUnlocked, isPreviewMode, isFriendPreviewMode, isSimple);
		}

		::System::Void ShowSkillPassiveView(::Class_2_208CC9941471731A_443* template_, ::System::Int32 index, ::System::Int32 level, ::System::Boolean isSimple)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_443*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWSKILLPASSIVEVIEW_OFFSET))(this, template_, index, level, isSimple);
		}

		::System::Void ShowSkillDetailView(::Class_2_208CC9941471731A_190* template_, ::Share::EAvatarSkillType type, ::System::Int32 level, ::System::Boolean isSimple)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_190*, ::Share::EAvatarSkillType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_SHOWSKILLDETAILVIEW_OFFSET))(this, template_, type, level, isSimple);
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
