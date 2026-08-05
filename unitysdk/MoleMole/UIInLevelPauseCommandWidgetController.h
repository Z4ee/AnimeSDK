#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_013DB5EBD89922B2;
class Class_2_208CC9941471731A_674;
class Class_2_5F79F2747254EAE8_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITabBtnRoleRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x190FF1D0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190FF0D0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x190FF5B0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x190FF620)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190FF670)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190FF160)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190FF540)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_REFRESHAVATARINFOS_OFFSET UNITYSDK_OFFSET(0x190FFDA0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_REFRESHSKILLLIST_OFFSET UNITYSDK_OFFSET(0x190FFFE0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_SETAVATARINFOS_OFFSET UNITYSDK_OFFSET(0x190FF6F0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_SETSELECTEDAVATARID_OFFSET UNITYSDK_OFFSET(0x19100500)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET UNITYSDK_OFFSET(0x190FFF80)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x191008C0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19100700)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__INITVIEW_B__6_0_OFFSET UNITYSDK_OFFSET(0x191008D0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191008E0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19100970)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19100A10)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19100A20)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19100AB0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19100B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseCommandWidgetController_TypeDefinitionIndex = 70566;

	class UIInLevelPauseCommandWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_MAX_AVATAR_NUM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseCommandWidgetController_TypeDefinitionIndex)->GetStaticField(0xF920);
		}
		::Class_2_5F79F2747254EAE8_1* _view; // 0x2C0
		::System::Int32 _selectedIndex; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* _avatarTabDict; // 0x2D0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_208CC9941471731A_674*, ::Class_2_013DB5EBD89922B2*>>* _skillListTemplateList; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UITabBtnRoleRowWidgetController*>* _roleTabBtnList; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshAvatarInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_REFRESHAVATARINFOS_OFFSET))(this);
		}

		::System::Void SetAvatarInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_SETAVATARINFOS_OFFSET))(this);
		}

		::System::Void SwitchSelectedAvatar(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET))(this, index);
		}

		::System::Void SetSelectedAvatarID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_SETSELECTEDAVATARID_OFFSET))(this);
		}

		::System::Void RefreshSkillList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_REFRESHSKILLLIST_OFFSET))(this);
		}

		::System::Void _InitView_b__6_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__INITVIEW_B__6_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
