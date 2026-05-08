#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E45050)
#define MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E45090)
#define MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__UPDATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x17E450A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityQuestTipsWidgetController___c_TypeDefinitionIndex = 69731;

	class UIActivityQuestTipsWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityQuestTipsWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityQuestTipsWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityQuestTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37B30);
		}
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityQuestTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__UPDATE_B__9_0_OFFSET))(this);
		}
	};
}
