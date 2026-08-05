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

#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x17448B40)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_DESTROYALLUNIT_OFFSET UNITYSDK_OFFSET(0x17448CD0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETALLAVATARIDS_OFFSET UNITYSDK_OFFSET(0x17449970)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETSHOWAVATARID_OFFSET UNITYSDK_OFFSET(0x174492E0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17448040)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_INITUI_OFFSET UNITYSDK_OFFSET(0x17448150)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0x17449920)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17448A10)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17448050)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17448C60)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17448AA0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SELECTROLE_OFFSET UNITYSDK_OFFSET(0x174493D0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETMODELACTIVE_OFFSET UNITYSDK_OFFSET(0x17448850)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETROLEIMAGEACTIVE_OFFSET UNITYSDK_OFFSET(0x17448E40)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17449A80)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17449BC0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17449C50)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17449C60)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17449C70)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectTestRolePageController_TypeDefinitionIndex = 58443;

	class UILineupSelectTestRolePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_A0E3DEDE1BCD4C13_1* _view; // 0x318
		::Il2CppArray<::MoleMole::UILineupSelectTestRolePageController_UIRoleSelect*>* _units; // 0x320
		::System::UInt32 avatarCount; // 0x328
		::System::UInt32 loadedAvatarCount; // 0x32C
		::System::Boolean random; // 0x330
		::System::Boolean isIndex; // 0x331
		::System::Int32 avatarIndex; // 0x334
		::UnityEngine::Transform* imagesRoot; // 0x338
		::System::Collections::Generic::List_1<::System::Int32>* _avatarIDs; // 0x340

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
