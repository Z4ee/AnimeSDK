#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UIMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE37EF30)
#define RPG_CLIENT_UIMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE37EF60)
#define RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__210_0_OFFSET UNITYSDK_OFFSET(0xE37EF70)
#define RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__210_1_OFFSET UNITYSDK_OFFSET(0xE37F000)
#define RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__210_2_OFFSET UNITYSDK_OFFSET(0xE37F090)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager___c_TypeDefinitionIndex = 72986;

	class UIManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>** StaticGet___9__210_1()
		{
			return (::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIManager___c_TypeDefinitionIndex)->GetStaticField(0x63410);
		}
		static ::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>** StaticGet___9__210_0()
		{
			return (::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIManager___c_TypeDefinitionIndex)->GetStaticField(0x63418);
		}
		static ::RPG::Client::UIManager___c** StaticGet___9()
		{
			return (::RPG::Client::UIManager___c**)Il2CppClass::FromTypeDefinitionIndex(UIManager___c_TypeDefinitionIndex)->GetStaticField(0x63420);
		}
		static ::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>** StaticGet___9__210_2()
		{
			return (::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIManager___c_TypeDefinitionIndex)->GetStaticField(0x63428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetFirstFocusableController_b__210_0(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__210_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetFirstFocusableController_b__210_1(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__210_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetFirstFocusableController_b__210_2(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__210_2_OFFSET))(this, a1);
		}
	};
}
