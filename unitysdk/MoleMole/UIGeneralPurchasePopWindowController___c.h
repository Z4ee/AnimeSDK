#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E85E60)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19E85EA0)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DOPURCHASE_B__56_2_OFFSET UNITYSDK_OFFSET(0x19E85F10)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__GET_UPAVATARLIST_B__44_0_OFFSET UNITYSDK_OFFSET(0x19E85EB0)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__ONREWARDONCLICKCALLBACK_B__47_2_OFFSET UNITYSDK_OFFSET(0x19E85EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex = 43131;

	class UIGeneralPurchasePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__56_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32D00);
		}
		static ::MoleMole::UIGeneralPurchasePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralPurchasePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32D08);
		}
		static ::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Int32>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32D10);
		}
		static ::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Int32>** StaticGet___9__47_2()
		{
			return (::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_UpAvatarList_b__44_0(::Class_1_1685EC66FBD28897* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__GET_UPAVATARLIST_B__44_0_OFFSET))(this, x);
		}

		::System::Int32 _OnRewardOnClickCallback_b__47_2(::Class_1_1685EC66FBD28897* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__ONREWARDONCLICKCALLBACK_B__47_2_OFFSET))(this, x);
		}

		::System::Void _DoPurchase_b__56_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DOPURCHASE_B__56_2_OFFSET))(this);
		}
	};
}
