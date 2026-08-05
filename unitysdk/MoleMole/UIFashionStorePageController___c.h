#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIFASHIONSTOREPAGECONTROLLER___C__BUILDDATABINDING_B__13_6_OFFSET UNITYSDK_OFFSET(0x19AB0140)
#define MOLEMOLE_UIFASHIONSTOREPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AB00F0)
#define MOLEMOLE_UIFASHIONSTOREPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB0130)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStorePageController___c_TypeDefinitionIndex = 88472;

	class UIFashionStorePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIFashionStorePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIFashionStorePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFashionStorePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF90);
		}
		static ::System::Action** StaticGet___9__13_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFashionStorePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__13_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPAGECONTROLLER___C__BUILDDATABINDING_B__13_6_OFFSET))(this);
		}
	};
}
