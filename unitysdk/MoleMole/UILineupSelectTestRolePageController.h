#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_1824EF69C8E376A3;
class Class_2_A0E3DEDE1BCD4C13_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UILineupSelectTestRolePageController_UIRoleSelect; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x15D48B30)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_DESTROYALLUNIT_OFFSET UNITYSDK_OFFSET(0x15D48CC0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETALLAVATARIDS_OFFSET UNITYSDK_OFFSET(0x15D49950)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETSHOWAVATARID_OFFSET UNITYSDK_OFFSET(0x15D492D0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15D48020)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_INITUI_OFFSET UNITYSDK_OFFSET(0x15D48130)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0x15D49900)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D48A00)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15D48030)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D48C50)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D48A90)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SELECTROLE_OFFSET UNITYSDK_OFFSET(0x15D493C0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETMODELACTIVE_OFFSET UNITYSDK_OFFSET(0x15D48830)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETROLEIMAGEACTIVE_OFFSET UNITYSDK_OFFSET(0x15D48E30)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D49A60)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D49BA0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15D49C30)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D49C40)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D49C50)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectTestRolePageController_TypeDefinitionIndex = 62438;

	class UILineupSelectTestRolePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_A0E3DEDE1BCD4C13_1* _view; // 0x310
		::Il2CppArray<::MoleMole::UILineupSelectTestRolePageController_UIRoleSelect*>* _units; // 0x318
		::System::UInt32 avatarCount; // 0x320
		::System::UInt32 loadedAvatarCount; // 0x324
		::System::Boolean random; // 0x328
		::System::Boolean isIndex; // 0x329
		::System::Int32 avatarIndex; // 0x32C
		::UnityEngine::Transform* imagesRoot; // 0x330
		::System::Collections::Generic::List_1<::System::Int32>* _avatarIDs; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void InitUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_INITUI_OFFSET))(this);
		}

		::UnityEngine::Transform* SetRoleImageActive()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETROLEIMAGEACTIVE_OFFSET))(this);
		}

		::System::Void SetModelActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETMODELACTIVE_OFFSET))(this, active);
		}

		::System::Void SelectRole(::System::Int32 slotIndex, ::Class_2_1824EF69C8E376A3* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SELECTROLE_OFFSET))(this, slotIndex, item);
		}

		::System::Void LoadRTModelFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET))(this);
		}

		::System::Int32 GetShowAvatarID(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETSHOWAVATARID_OFFSET))(this, index);
		}

		::System::Void GetAllAvatarIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETALLAVATARIDS_OFFSET))(this);
		}

		::System::Void DestroyAllUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_DESTROYALLUNIT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
