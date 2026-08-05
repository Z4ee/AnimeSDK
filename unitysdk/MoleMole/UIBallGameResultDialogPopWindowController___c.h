#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F23CE60)
#define MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F23CEA0)
#define MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__INITBULLET_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F23CEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameResultDialogPopWindowController___c_TypeDefinitionIndex = 93269;

	class UIBallGameResultDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameResultDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x521E0);
		}
		static ::MoleMole::UIBallGameResultDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBallGameResultDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameResultDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x521E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitBullet_b__16_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__INITBULLET_B__16_0_OFFSET))(this, a, b);
		}
	};
}
