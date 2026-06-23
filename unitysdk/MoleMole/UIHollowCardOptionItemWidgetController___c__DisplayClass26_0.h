#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E053999CF96A442A;
class Class_2_1A39E1B51756BF41;
class Class_2_208CC9941471731A_131;
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177A2F00)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x177A2F10)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x177A3AB0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_G___CHANGECARD_0_OFFSET UNITYSDK_OFFSET(0x177A2F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionItemWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 49017;

	class UIHollowCardOptionItemWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_131* template1; // 0x10
		::Class_2_1A39E1B51756BF41* icon2; // 0x18
		::MoleMole::UIHollowCardOptionItemWidgetController* __4__this; // 0x20
		::Class_2_1A39E1B51756BF41* icon1; // 0x28
		::Class_1_E053999CF96A442A* choice; // 0x30
		::System::String* icon2Str; // 0x38
		::System::String* icon1Str; // 0x40
		::Class_2_208CC9941471731A_131* template2; // 0x48
		::System::Int32 itemid1; // 0x50
		::System::Int32 itemid2; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshView_g___ChangeCard_0(::System::Boolean useAnim, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_G___CHANGECARD_0_OFFSET))(this, useAnim, finishCallback);
		}

		::System::Void _RefreshView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__4_OFFSET))(this);
		}
	};
}
