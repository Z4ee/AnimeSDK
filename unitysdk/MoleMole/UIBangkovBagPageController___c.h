#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193679C0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19367A00)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__PICKITEM_B__41_0_OFFSET UNITYSDK_OFFSET(0x19367A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController___c_TypeDefinitionIndex = 61462;

	class UIBangkovBagPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangkovBagPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangkovBagPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovBagPageController___c_TypeDefinitionIndex)->GetStaticField(0x47070);
		}
		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovBagPageController___c_TypeDefinitionIndex)->GetStaticField(0x47078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PickItem_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__PICKITEM_B__41_0_OFFSET))(this);
		}
	};
}
