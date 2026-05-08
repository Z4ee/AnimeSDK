#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_3_48A3D3A34C52331D_6;
namespace MoleMole { class UILineupSelectContext_CheckGoBattleDel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF637650)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF637690)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_2_OFFSET UNITYSDK_OFFSET(0xF637CB0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_4_OFFSET UNITYSDK_OFFSET(0xF637EB0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_5_OFFSET UNITYSDK_OFFSET(0xF637EA0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__66_0_OFFSET UNITYSDK_OFFSET(0xF6376A0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__66_1_OFFSET UNITYSDK_OFFSET(0xF6377B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex = 74389;

	class UIYorozuyaAbyssWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILineupSelectContext_CheckGoBattleDel** StaticGet___9__70_2()
		{
			return (::MoleMole::UILineupSelectContext_CheckGoBattleDel**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CFE0);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__70_4()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CFE8);
		}
		static ::MoleMole::UIYorozuyaAbyssWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIYorozuyaAbyssWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CFF0);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_6*>** StaticGet___9__70_5()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_6*>**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CFF8);
		}
		static ::System::Action** StaticGet___9__66_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D000);
		}
		static ::System::Action** StaticGet___9__66_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaAbyssWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnHollowReconnectHandle_b__66_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__66_0_OFFSET))(this);
		}

		::System::Void _OnHollowReconnectHandle_b__66_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__66_1_OFFSET))(this);
		}

		::System::Boolean _GotoBeginBattle_b__70_2(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_2_OFFSET))(this, data);
		}

		::System::Void _GotoBeginBattle_b__70_5(::Class_3_48A3D3A34C52331D_6* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_5_OFFSET))(this, beginHollowData);
		}

		::System::String* _GotoBeginBattle_b__70_4(::System::Int32 idx)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__70_4_OFFSET))(this, idx);
		}
	};
}
