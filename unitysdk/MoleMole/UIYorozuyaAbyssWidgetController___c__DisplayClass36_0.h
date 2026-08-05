#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaAbyssWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A15FE0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHSWEEPBTN_B__0_OFFSET UNITYSDK_OFFSET(0x11A15FF0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHSWEEPBTN_B__1_OFFSET UNITYSDK_OFFSET(0x11A16920)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHSWEEPBTN_B__2_OFFSET UNITYSDK_OFFSET(0x11A16AA0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHSWEEPBTN_B__3_OFFSET UNITYSDK_OFFSET(0x11A16B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssWidgetController___c__DisplayClass36_0_TypeDefinitionIndex = 68608;

	class UIYorozuyaAbyssWidgetController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* __9__1; // 0x10
		::System::Action* __9__3; // 0x18
		::System::Action* __9__2; // 0x20
		::System::String* dungeonName; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* heatList; // 0x30
		::MoleMole::UIYorozuyaAbyssWidgetController* __4__this; // 0x38
		::System::Int32 consume; // 0x40
		::System::Int32 itemCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSweepBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHSWEEPBTN_B__0_OFFSET))(this);
		}

		::System::Void _RefreshSweepBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHSWEEPBTN_B__1_OFFSET))(this);
		}

		::System::Void _RefreshSweepBtn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHSWEEPBTN_B__2_OFFSET))(this);
		}

		::System::Void _RefreshSweepBtn_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHSWEEPBTN_B__3_OFFSET))(this);
		}
	};
}
