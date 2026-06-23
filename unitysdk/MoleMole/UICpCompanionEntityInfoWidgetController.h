#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_6399F7CE1D7FBB9B_1;
class Class_2_1DAC8AE00C47D12C_2;
class Class_3_412776396A6B9A05_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICpTagBehaviour; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_HIDETAGS_OFFSET UNITYSDK_OFFSET(0x1E0C1620)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E0C10B0)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E0C1140)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1E0C0FC0)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1E0C1030)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_SETTAGSCRIPT_OFFSET UNITYSDK_OFFSET(0x1E0C1E20)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1E0C1200)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_UPDATETAGS_OFFSET UNITYSDK_OFFSET(0x1E0C1690)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C1FB0)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E0C2060)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E0C20F0)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1E0C2180)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1E0C2210)

namespace MoleMole
{
	inline static constexpr unsigned int UICpCompanionEntityInfoWidgetController_TypeDefinitionIndex = 90942;

	class UICpCompanionEntityInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1DAC8AE00C47D12C_2* _view; // 0x2C0
		::System::String* tagPathRoot; // 0x2C8
		::System::Collections::Generic::List_1<::System::Int32>* tags; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateData(::System::String* name, ::System::String* icon, ::System::String* goodTipsIcon, ::System::String* desc, ::System::String* num, ::Foundation::AssetPath frameOutLine, ::System::String* numTemplateStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::Foundation::AssetPath, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_UPDATEDATA_OFFSET))(this, name, icon, goodTipsIcon, desc, num, frameOutLine, numTemplateStr);
		}

		::System::Void HideTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_HIDETAGS_OFFSET))(this);
		}

		::System::Void UpdateTags(::System::Collections::Generic::List_1<::System::Int32>* configTagss, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* tagNumDict, ::Class_1_6399F7CE1D7FBB9B_1* configMap, ::Class_3_412776396A6B9A05_1* world)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::Class_1_6399F7CE1D7FBB9B_1*, ::Class_3_412776396A6B9A05_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_UPDATETAGS_OFFSET))(this, configTagss, tagNumDict, configMap, world);
		}

		::System::Void SetTagScript(::System::String* iconPath, ::System::Int32 cur, ::System::Int32 max, ::MoleMole::UICpTagBehaviour* tagScript)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::UICpTagBehaviour*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_SETTAGSCRIPT_OFFSET))(this, iconPath, cur, max, tagScript);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
