#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHARUMASAGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17323BD0)
#define MOLEMOLE_UIACTIVITYHARUMASAGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17323C10)
#define MOLEMOLE_UIACTIVITYHARUMASAGIFTPOPWINDOWCONTROLLER___C__TAKEREWARD_B__14_0_OFFSET UNITYSDK_OFFSET(0x17323C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHarumasaGiftPopWindowController___c_TypeDefinitionIndex = 71859;

	class UIActivityHarumasaGiftPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHarumasaGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x309B0);
		}
		static ::MoleMole::UIActivityHarumasaGiftPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHarumasaGiftPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHarumasaGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x309B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHARUMASAGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHARUMASAGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TakeReward_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHARUMASAGIFTPOPWINDOWCONTROLLER___C__TAKEREWARD_B__14_0_OFFSET))(this);
		}
	};
}
