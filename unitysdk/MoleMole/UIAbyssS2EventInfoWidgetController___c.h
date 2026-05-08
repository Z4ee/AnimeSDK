#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_AC1B1CB16C488BEC;
class Class_3_48A3D3A34C52331D_6;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158704B0)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158704F0)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONBEGINBATTLE_B__13_0_OFFSET UNITYSDK_OFFSET(0x15870B30)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONBUILDBTNCLICK_B__5_0_OFFSET UNITYSDK_OFFSET(0x15870500)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__10_0_OFFSET UNITYSDK_OFFSET(0x15870520)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__10_1_OFFSET UNITYSDK_OFFSET(0x15870630)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex = 62529;

	class UIAbyssS2EventInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x324D0);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_6*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_6*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x324D8);
		}
		static ::MoleMole::UIAbyssS2EventInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2EventInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x324E0);
		}
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x324E8);
		}
		static ::System::Func_2<::Class_2_AC1B1CB16C488BEC*, ::Class_1_0D6706375CDAAE8C*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_2_AC1B1CB16C488BEC*, ::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x324F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_1_0D6706375CDAAE8C* _OnBuildBtnClick_b__5_0(::Class_2_AC1B1CB16C488BEC* x)
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::Class_2_AC1B1CB16C488BEC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONBUILDBTNCLICK_B__5_0_OFFSET))(this, x);
		}

		::System::Void _OnHollowReconnectHandle_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__10_0_OFFSET))(this);
		}

		::System::Void _OnHollowReconnectHandle_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__10_1_OFFSET))(this);
		}

		::System::Void _OnBeginBattle_b__13_0(::Class_3_48A3D3A34C52331D_6* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONBEGINBATTLE_B__13_0_OFFSET))(this, beginHollowData);
		}
	};
}
