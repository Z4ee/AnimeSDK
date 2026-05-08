#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EBD4F0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EBD530)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__ONUIINIT_B__13_1_OFFSET UNITYSDK_OFFSET(0x14EBD540)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__ONUIINIT_B__13_2_OFFSET UNITYSDK_OFFSET(0x14EBD5A0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__PICKITEM_B__26_0_OFFSET UNITYSDK_OFFSET(0x14EBD640)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController___c_TypeDefinitionIndex = 59531;

	class UIBangkovBagPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__13_1()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovBagPageController___c_TypeDefinitionIndex)->GetStaticField(0x40730);
		}
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovBagPageController___c_TypeDefinitionIndex)->GetStaticField(0x40738);
		}
		static ::MoleMole::UIBangkovBagPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangkovBagPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovBagPageController___c_TypeDefinitionIndex)->GetStaticField(0x40740);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__13_2()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovBagPageController___c_TypeDefinitionIndex)->GetStaticField(0x40748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__13_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__ONUIINIT_B__13_1_OFFSET))(this, _);
		}

		::System::Void _OnUIInit_b__13_2(::System::Object* payload)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__ONUIINIT_B__13_2_OFFSET))(this, payload);
		}

		::System::Void _PickItem_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__PICKITEM_B__26_0_OFFSET))(this);
		}
	};
}
