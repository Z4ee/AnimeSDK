#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_9;
class Class_3_8280730987DC22B2_7;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19205460)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192054A0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__ONRECEIVEBTNCLICKED_B__9_0_OFFSET UNITYSDK_OFFSET(0x19205580)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x192054B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex = 42845;

	class UIArcadeAchievementPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_7807B2B04302CD7B_9*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_1_7807B2B04302CD7B_9*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48F90);
		}
		static ::MoleMole::UIArcadeAchievementPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIArcadeAchievementPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48F98);
		}
		static ::System::Action_1<::Class_3_8280730987DC22B2_7*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::Class_3_8280730987DC22B2_7*>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__7_0(::Class_1_7807B2B04302CD7B_9* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7807B2B04302CD7B_9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET))(this, id);
		}

		::System::Void _OnReceiveBtnClicked_b__9_0(::Class_3_8280730987DC22B2_7* itemMap)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_8280730987DC22B2_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__ONRECEIVEBTNCLICKED_B__9_0_OFFSET))(this, itemMap);
		}
	};
}
