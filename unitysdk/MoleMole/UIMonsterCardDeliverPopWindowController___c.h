#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMONSTERCARDDELIVERPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151ED530)
#define MOLEMOLE_UIMONSTERCARDDELIVERPOPWINDOWCONTROLLER___C__CLOSEWITHNOTIFY_B__8_0_OFFSET UNITYSDK_OFFSET(0x151ED580)
#define MOLEMOLE_UIMONSTERCARDDELIVERPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151ED570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardDeliverPopWindowController___c_TypeDefinitionIndex = 39099;

	class UIMonsterCardDeliverPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardDeliverPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F080);
		}
		static ::MoleMole::UIMonsterCardDeliverPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMonsterCardDeliverPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardDeliverPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDDELIVERPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDDELIVERPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _CloseWithNotify_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDDELIVERPOPWINDOWCONTROLLER___C__CLOSEWITHNOTIFY_B__8_0_OFFSET))(this);
		}
	};
}
