#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162CAAF0)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162CAB30)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DOPURCHASE_B__49_2_OFFSET UNITYSDK_OFFSET(0x162CABA0)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__GET_UPAVATARLIST_B__37_0_OFFSET UNITYSDK_OFFSET(0x162CAB40)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__ONREWARDONCLICKCALLBACK_B__40_2_OFFSET UNITYSDK_OFFSET(0x162CAB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex = 42577;

	class UIGeneralPurchasePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Int32>** StaticGet___9__40_2()
		{
			return (::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2ED10);
		}
		static ::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Int32>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2ED18);
		}
		static ::MoleMole::UIGeneralPurchasePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralPurchasePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2ED20);
		}
		static ::System::Action** StaticGet___9__49_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPurchasePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2ED28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_UpAvatarList_b__37_0(::Class_1_1685EC66FBD28897* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__GET_UPAVATARLIST_B__37_0_OFFSET))(this, x);
		}

		::System::Int32 _OnRewardOnClickCallback_b__40_2(::Class_1_1685EC66FBD28897* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__ONREWARDONCLICKCALLBACK_B__40_2_OFFSET))(this, x);
		}

		::System::Void _DoPurchase_b__49_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DOPURCHASE_B__49_2_OFFSET))(this);
		}
	};
}
