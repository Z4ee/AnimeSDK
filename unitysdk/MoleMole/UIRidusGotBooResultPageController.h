#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_BF7E7379C46362C1;
class Class_2_787A64751D1D3DEF;
class Class_2_92B4A6867E3A341F;
namespace MoleMole { class CompetitiveScoreFillBarParam; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x14576320)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_QUESTMAP_OFFSET UNITYSDK_OFFSET(0x14576CE0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14575EF0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONCLICKRESTART_OFFSET UNITYSDK_OFFSET(0x14576DA0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONCLICKRETURNSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0x14576EC0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14575F00)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14576F50)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14575F90)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x145763F0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14577080)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14576FC0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__ONCLICKRETURNSELECTLEVEL_B__23_0_OFFSET UNITYSDK_OFFSET(0x145770C0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14577220)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x145772B0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x145772C0)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x145772D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooResultPageController_TypeDefinitionIndex = 62665;

	class UIRidusGotBooResultPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_TeamARatio()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooResultPageController_TypeDefinitionIndex)->GetStaticField(0xEE70);
		}
		::Class_2_92B4A6867E3A341F* _view; // 0x310
		::Class_2_787A64751D1D3DEF* model; // 0x318
		::MoleMole::CompetitiveScoreFillBarParam* _scoreFillBarParam; // 0x320
		::System::String* SFadein; // 0x328
		::System::String* ABFadein; // 0x330
		::System::String* FailFadein; // 0x338
		::System::String* ribbonFail; // 0x340
		::System::String* ribbonVictory; // 0x348
		::System::String* trophyX; // 0x350
		::System::String* trophyB; // 0x358
		::System::String* trophyA; // 0x360
		::System::String* trophyS; // 0x368

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

		::Class_1_BF7E7379C46362C1* get_QuestMap()
		{
			return ((::Class_1_BF7E7379C46362C1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER_GET_QUESTMAP_OFFSET))(this);
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
