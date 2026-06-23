#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_15;
class Class_1_C1067BB4CC216C9A;
class Class_2_208CC9941471731A_819;
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2> class __f__AnonymousType1_2;

#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E44610)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E44650)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_1_OFFSET UNITYSDK_OFFSET(0x15E44680)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_3_OFFSET UNITYSDK_OFFSET(0x15E446A0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x15E44660)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex = 46711;

	class UIActivityHotPotLevelEndPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::__f__AnonymousType1_2<::Class_2_208CC9941471731A_819*, ::System::Int32>*, ::System::Int32>** StaticGet___9__11_3()
		{
			return (::System::Func_2<::__f__AnonymousType1_2<::Class_2_208CC9941471731A_819*, ::System::Int32>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34490);
		}
		static ::System::Func_2<::Class_1_7807B2B04302CD7B_15*, ::System::Int32>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::Class_1_7807B2B04302CD7B_15*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34498);
		}
		static ::System::Func_2<::Class_1_C1067BB4CC216C9A*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_1_C1067BB4CC216C9A*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x344A0);
		}
		static ::MoleMole::UIActivityHotPotLevelEndPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotPotLevelEndPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x344A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__9_0(::Class_1_C1067BB4CC216C9A* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C1067BB4CC216C9A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, x);
		}

		::System::Int32 _RefreshFailTips_b__11_1(::Class_1_7807B2B04302CD7B_15* c)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_7807B2B04302CD7B_15*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_1_OFFSET))(this, c);
		}

		::System::Int32 _RefreshFailTips_b__11_3(::__f__AnonymousType1_2<::Class_2_208CC9941471731A_819*, ::System::Int32>* x)
		{
			return ((::System::Int32(*)(::PVOID, ::__f__AnonymousType1_2<::Class_2_208CC9941471731A_819*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_3_OFFSET))(this, x);
		}
	};
}
