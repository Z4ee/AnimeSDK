#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_1;
class Class_1_C1067BB4CC216C9A_1;
class Class_2_208CC9941471731A_307;
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2> class __f__AnonymousType1_2;

#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152D1050)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152D1090)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_1_OFFSET UNITYSDK_OFFSET(0x152D10C0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_3_OFFSET UNITYSDK_OFFSET(0x152D10E0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x152D10A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex = 57603;

	class UIActivityHotPotLevelEndPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_C1067BB4CC216C9A_1*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_1_C1067BB4CC216C9A_1*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x325E0);
		}
		static ::System::Func_2<::Class_1_7807B2B04302CD7B_1*, ::System::Int32>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::Class_1_7807B2B04302CD7B_1*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x325E8);
		}
		static ::MoleMole::UIActivityHotPotLevelEndPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotPotLevelEndPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x325F0);
		}
		static ::System::Func_2<::__f__AnonymousType1_2<::Class_2_208CC9941471731A_307*, ::System::Int32>*, ::System::Int32>** StaticGet___9__11_3()
		{
			return (::System::Func_2<::__f__AnonymousType1_2<::Class_2_208CC9941471731A_307*, ::System::Int32>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x325F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__9_0(::Class_1_C1067BB4CC216C9A_1* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C1067BB4CC216C9A_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, x);
		}

		::System::Int32 _RefreshFailTips_b__11_1(::Class_1_7807B2B04302CD7B_1* c)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_7807B2B04302CD7B_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_1_OFFSET))(this, c);
		}

		::System::Int32 _RefreshFailTips_b__11_3(::__f__AnonymousType1_2<::Class_2_208CC9941471731A_307*, ::System::Int32>* x)
		{
			return ((::System::Int32(*)(::PVOID, ::__f__AnonymousType1_2<::Class_2_208CC9941471731A_307*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_3_OFFSET))(this, x);
		}
	};
}
