#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_14E7CE92E8A3183F;
class Class_2_1A39E1B51756BF41;
class Class_2_208CC9941471731A_155;
class Class_2_2B132FE58777EC28_Class_2_C190B7D7243A62A1_1;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18422890)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184228D0)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__REFRESHBG_B__10_0_OFFSET UNITYSDK_OFFSET(0x184228E0)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__REFRESHPROGRESS_B__11_0_OFFSET UNITYSDK_OFFSET(0x18422900)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__UPDATEABYSSEVENT_B__14_0_OFFSET UNITYSDK_OFFSET(0x18422920)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__UPDATEABYSSEVENT_B__14_1_OFFSET UNITYSDK_OFFSET(0x18422950)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex = 55414;

	class UIHandBookZeroThemeItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_2_0D31A1661D004892<::Class_2_2B132FE58777EC28_Class_2_C190B7D7243A62A1_1*>*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::Class_2_0D31A1661D004892<::Class_2_2B132FE58777EC28_Class_2_C190B7D7243A62A1_1*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C5B0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_155*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_155*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C5B8);
		}
		static ::MoleMole::UIHandBookZeroThemeItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookZeroThemeItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C5C0);
		}
		static ::System::Func_2<::Class_2_14E7CE92E8A3183F*, ::System::Boolean>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::Class_2_14E7CE92E8A3183F*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C5C8);
		}
		static ::System::Action_1<::Class_2_1A39E1B51756BF41*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::Class_2_1A39E1B51756BF41*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBg_b__10_0(::Class_2_1A39E1B51756BF41* bg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__REFRESHBG_B__10_0_OFFSET))(this, bg);
		}

		::System::Void _RefreshProgress_b__11_0(::Class_2_0D31A1661D004892<::Class_2_2B132FE58777EC28_Class_2_C190B7D7243A62A1_1*>* go)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0D31A1661D004892<::Class_2_2B132FE58777EC28_Class_2_C190B7D7243A62A1_1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__REFRESHPROGRESS_B__11_0_OFFSET))(this, go);
		}

		::System::Boolean _UpdateAbyssEvent_b__14_0(::Class_2_208CC9941471731A_155* cfg)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_155*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__UPDATEABYSSEVENT_B__14_0_OFFSET))(this, cfg);
		}

		::System::Boolean _UpdateAbyssEvent_b__14_1(::Class_2_14E7CE92E8A3183F* cfg)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_14E7CE92E8A3183F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__UPDATEABYSSEVENT_B__14_1_OFFSET))(this, cfg);
		}
	};
}
