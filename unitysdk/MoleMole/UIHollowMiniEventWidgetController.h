#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BF73F764A6192785.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_1_6C2E46293F2AE988;
class Class_2_2019B3C14943B358;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowMiniEventWidgetController_Context; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_CLEARMATERIALS_OFFSET UNITYSDK_OFFSET(0x17324590)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_INITCHOICEOBJ_OFFSET UNITYSDK_OFFSET(0x17324850)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17324500)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17325F00)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17323C80)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17323CE0)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_PLAYFRAMETEXTUREFAIRY_OFFSET UNITYSDK_OFFSET(0x17325C00)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_REBUILD_OFFSET UNITYSDK_OFFSET(0x17325A60)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17323DD0)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17325B90)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17326080)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173261F0)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17326280)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17326310)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x173263A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMiniEventWidgetController_TypeDefinitionIndex = 53753;

	class UIHollowMiniEventWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single REFRESH_CD_TIME; // 0x0
		// static const ::System::Single REFRESH_CD_PROTECT; // 0x0
		::Class_2_2019B3C14943B358* _view; // 0x2C0
		::MoleMole::UIHollowMiniEventWidgetController_Context* _context; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6C2E46293F2AE988*>* uiFrameTextureSheetPlayer; // 0x2D0
		::System::Single _refreshCDTimer; // 0x2D8
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* loadImgsMaterials; // 0x2E0
		::Class_1_0AEBFEBDADDA07AC* _serverInfo; // 0x2E8
		::Enum_3_BF73F764A6192785 State; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshView(::MoleMole::UIHollowMiniEventWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowMiniEventWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_REBUILD_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void InitChoiceObj(::System::Int32 choiceIndex, ::System::Boolean& interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_INITCHOICEOBJ_OFFSET))(this, choiceIndex, interactable);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ClearMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_CLEARMATERIALS_OFFSET))(this);
		}

		::System::Boolean PlayFrameTextureFairy(::UnityEngine::UI::Image* icon, ::System::String* key, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_PLAYFRAMETEXTUREFAIRY_OFFSET))(this, icon, key, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
