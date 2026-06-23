#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1577B6C0)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1577B700)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__OPENPERSONALQUEST_B__26_3_OFFSET UNITYSDK_OFFSET(0x1577B900)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__UPDATEPERSONALMISSION_B__24_6_OFFSET UNITYSDK_OFFSET(0x1577B710)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageReplyWidgetController___c_TypeDefinitionIndex = 81756;

	class UIPrivateMessageReplyWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessageReplyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37D60);
		}
		static ::MoleMole::UIPrivateMessageReplyWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIPrivateMessageReplyWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessageReplyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37D68);
		}
		static ::System::Action** StaticGet___9__24_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessageReplyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdatePersonalMission_b__24_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__UPDATEPERSONALMISSION_B__24_6_OFFSET))(this);
		}

		::System::Void _OpenPersonalQuest_b__26_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__OPENPERSONALQUEST_B__26_3_OFFSET))(this);
		}
	};
}
