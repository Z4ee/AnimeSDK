#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EDCAB0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDCAF0)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__ONCLICKCAMERABTN_B__3_0_OFFSET UNITYSDK_OFFSET(0x15EDCB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIConsoleCameraBtnWidgetController___c_TypeDefinitionIndex = 61679;

	class UIConsoleCameraBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIConsoleCameraBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44920);
		}
		static ::MoleMole::UIConsoleCameraBtnWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIConsoleCameraBtnWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIConsoleCameraBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44928);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickCameraBtn_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__ONCLICKCAMERABTN_B__3_0_OFFSET))(this);
		}
	};
}
