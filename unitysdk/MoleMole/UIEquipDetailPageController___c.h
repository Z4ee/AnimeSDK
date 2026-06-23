#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E81D20)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E81D60)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__ONMAINBTNCLICKED_B__51_0_OFFSET UNITYSDK_OFFSET(0x15E81D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDetailPageController___c_TypeDefinitionIndex = 48001;

	class UIEquipDetailPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIEquipDetailPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIEquipDetailPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x43220);
		}
		static ::System::Action** StaticGet___9__51_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x43228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMainBtnClicked_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__ONMAINBTNCLICKED_B__51_0_OFFSET))(this);
		}
	};
}
