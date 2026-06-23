#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_25;
class Class_3_D0B68EB9E337E202_1;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187628F0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18762930)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__ONRECEIVEBTNCLICKED_B__9_0_OFFSET UNITYSDK_OFFSET(0x18762A10)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x18762940)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex = 52426;

	class UIArcadeAchievementPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_D0B68EB9E337E202_1*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::Class_3_D0B68EB9E337E202_1*>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45030);
		}
		static ::System::Func_2<::Class_1_7807B2B04302CD7B_25*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_1_7807B2B04302CD7B_25*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45038);
		}
		static ::MoleMole::UIArcadeAchievementPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIArcadeAchievementPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__7_0(::Class_1_7807B2B04302CD7B_25* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7807B2B04302CD7B_25*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET))(this, id);
		}

		::System::Void _OnReceiveBtnClicked_b__9_0(::Class_3_D0B68EB9E337E202_1* itemMap)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_D0B68EB9E337E202_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__ONRECEIVEBTNCLICKED_B__9_0_OFFSET))(this, itemMap);
		}
	};
}
