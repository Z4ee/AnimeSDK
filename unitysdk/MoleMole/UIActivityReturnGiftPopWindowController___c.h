#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192DF1B0)
#define MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192DF1F0)
#define MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__ONGETREWARD_B__13_1_OFFSET UNITYSDK_OFFSET(0x192DF200)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnGiftPopWindowController___c_TypeDefinitionIndex = 90448;

	class UIActivityReturnGiftPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityReturnGiftPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityReturnGiftPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CD80);
		}
		static ::System::Action** StaticGet___9__13_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CD88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetReward_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__ONGETREWARD_B__13_1_OFFSET))(this);
		}
	};
}
