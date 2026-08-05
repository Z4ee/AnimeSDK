#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_EFDDB75650D0C0DE;
class Class_2_787A64751D1D3DEF;
class Class_2_DD281034ECC8067E;
namespace MoleMole { class CompetitiveScoreFillBarParam; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x179B4550)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_QUESTMAP_OFFSET UNITYSDK_OFFSET(0x179B4EC0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x179B4120)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONCLICKRESTART_OFFSET UNITYSDK_OFFSET(0x179B4F80)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONCLICKRETURNSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0x179B50A0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179B4130)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179B5130)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179B41C0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179B4610)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x179B5260)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179B51A0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__ONCLICKRETURNSELECTLEVEL_B__23_0_OFFSET UNITYSDK_OFFSET(0x179B52A0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179B53F0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179B5480)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179B5490)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179B54A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooResultPageController_TypeDefinitionIndex = 67150;

	class UIRidusGotBooResultPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_TeamARatio()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooResultPageController_TypeDefinitionIndex)->GetStaticField(0xEC90);
		}
		::Class_2_DD281034ECC8067E* _view; // 0x318
		::Class_2_787A64751D1D3DEF* model; // 0x320
		::MoleMole::CompetitiveScoreFillBarParam* _scoreFillBarParam; // 0x328
		::System::String* SFadein; // 0x330
		::System::String* ABFadein; // 0x338
		::System::String* FailFadein; // 0x340
		::System::String* ribbonFail; // 0x348
		::System::String* ribbonVictory; // 0x350
		::System::String* trophyX; // 0x358
		::System::String* trophyB; // 0x360
		::System::String* trophyA; // 0x368
		::System::String* trophyS; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::Class_2_787A64751D1D3DEF* get_Model()
		{
			return ((::Class_2_787A64751D1D3DEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::Class_1_EFDDB75650D0C0DE* get_QuestMap()
		{
			return ((::Class_1_EFDDB75650D0C0DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_QUESTMAP_OFFSET))(this);
		}

		::System::Void OnClickRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONCLICKRESTART_OFFSET))(this);
		}

		::System::Void OnClickReturnSelectLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONCLICKRETURNSELECTLEVEL_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnClickReturnSelectLevel_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__ONCLICKRETURNSELECTLEVEL_B__23_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
