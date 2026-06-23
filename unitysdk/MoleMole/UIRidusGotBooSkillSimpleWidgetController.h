#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_884;
class Class_2_21768B754ED9AFE6;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class RidusGotBooSkillEx; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_GET_SKILLCFG_OFFSET UNITYSDK_OFFSET(0x15F33900)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F337F0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15F33970)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F33880)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F330C0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F33120)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_REFRESHBYSKILLEX_OFFSET UNITYSDK_OFFSET(0x15F33220)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_SAMPLEANIMATIONBYTIME_OFFSET UNITYSDK_OFFSET(0x15F33AF0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_SETISNEXT_OFFSET UNITYSDK_OFFSET(0x15F33AA0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F33C70)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F33CD0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15F33D60)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F33E00)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F33E90)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F33F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSkillSimpleWidgetController_TypeDefinitionIndex = 71113;

	class UIRidusGotBooSkillSimpleWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 interruptSkillType = 0x4; // 0x0
		::Class_2_21768B754ED9AFE6* _view; // 0x2F0
		::MoleMole::RidusGotBooSkillEx* m_skillInfo; // 0x2F8
		::System::String* iconFormat; // 0x300
		::System::String* correctAnim; // 0x308
		::System::String* wrongAnim; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_884* get_SkillCfg()
		{
			return ((::Class_2_208CC9941471731A_884*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_GET_SKILLCFG_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetIsNext(::System::Boolean isNext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_SETISNEXT_OFFSET))(this, isNext);
		}

		::System::Void RefreshBySkillEx(::MoleMole::RidusGotBooSkillEx* skillEx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::RidusGotBooSkillEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_REFRESHBYSKILLEX_OFFSET))(this, skillEx);
		}

		::System::Void SampleAnimationByTime(::Class_2_FDFE69FE7B72463B* anim, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_SAMPLEANIMATIONBYTIME_OFFSET))(this, anim, animName);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
