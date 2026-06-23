#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1824EF69C8E376A3;
class Class_2_A3533EA2DA4533F9;
class Class_2_FCF7034E4F06A146_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelPauseTalentRowWidgetController; }
namespace MoleMole { class UITabBtnRoleRowWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_GETAVATARID_OFFSET UNITYSDK_OFFSET(0x174A6140)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_INITROLEBTN_OFFSET UNITYSDK_OFFSET(0x174A54D0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174A6000)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174A6090)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174A5390)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174A53F0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_REFRESHAVATARTALENTINFO_OFFSET UNITYSDK_OFFSET(0x174A6250)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_SETSELECTEDAVATARID_OFFSET UNITYSDK_OFFSET(0x174A6B80)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET UNITYSDK_OFFSET(0x174A61C0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x174A6EA0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174A6C50)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__INITROLEBTN_B__7_0_OFFSET UNITYSDK_OFFSET(0x174A6EC0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET UNITYSDK_OFFSET(0x174A6EB0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174A6ED0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174A6F60)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174A6FF0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174A7080)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTalentlWidgetController_TypeDefinitionIndex = 62258;

	class UIInLevelPauseTalentlWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_MAX_AVATAR_NUM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTalentlWidgetController_TypeDefinitionIndex)->GetStaticField(0x117F0);
		}
		// static const ::System::Int32 MAX_TALENT = 0x8; // 0x0
		::Class_2_FCF7034E4F06A146_1* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* handleList; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseTalentRowWidgetController*>* talentRowList; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* avatarIDList; // 0x2D8
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* avatarItemList; // 0x2E0
		::System::Collections::Generic::List_1<::Class_2_A3533EA2DA4533F9*>* _dBattleAvatars; // 0x2E8
		::System::Int32 _curAvatarID; // 0x2F0
		::System::Int32 _curIndex; // 0x2F4
		::System::Collections::Generic::List_1<::MoleMole::UITabBtnRoleRowWidgetController*>* roleTabBtns; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 GetAvatarID(::System::Int32 uniqueID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_GETAVATARID_OFFSET))(this, uniqueID);
		}

		::System::Void InitRoleBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_INITROLEBTN_OFFSET))(this);
		}

		::System::Void SwitchSelectedAvatar(::System::Int32 index, ::System::Boolean useAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET))(this, index, useAnim);
		}

		::System::Void SetSelectedAvatarID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_SETSELECTEDAVATARID_OFFSET))(this);
		}

		::System::Void RefreshAvatarTalentInfo(::System::Boolean useAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_REFRESHAVATARTALENTINFO_OFFSET))(this, useAnim);
		}

		::System::Void _OnUIOpen_b__3_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET))(this, args);
		}

		::System::Void _InitRoleBtn_b__7_0(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__INITROLEBTN_B__7_0_OFFSET))(this, i);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
