#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1CC8F53861C28C2;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16784C20)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16784C60)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__INITEMPTYCIRCLECONTENT_B__77_1_OFFSET UNITYSDK_OFFSET(0x16784C90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEEMOJI_B__83_0_OFFSET UNITYSDK_OFFSET(0x16784CB0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEMSG_B__82_2_OFFSET UNITYSDK_OFFSET(0x16784CA0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDEMOJI_B__52_1_OFFSET UNITYSDK_OFFSET(0x16784C80)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDMSG_B__46_2_OFFSET UNITYSDK_OFFSET(0x16784C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c_TypeDefinitionIndex = 66833;

	class UIChatWindowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__82_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x326B0);
		}
		static ::System::Action** StaticGet___9__77_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x326B8);
		}
		static ::System::Action** StaticGet___9__83_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x326C0);
		}
		static ::MoleMole::UIChatWindowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIChatWindowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x326C8);
		}
		static ::System::Action_1<::Class_1_B1CC8F53861C28C2*>** StaticGet___9__52_1()
		{
			return (::System::Action_1<::Class_1_B1CC8F53861C28C2*>**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x326D0);
		}
		static ::System::Action_1<::Class_1_B1CC8F53861C28C2*>** StaticGet___9__46_2()
		{
			return (::System::Action_1<::Class_1_B1CC8F53861C28C2*>**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x326D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSendFriendMsg_b__46_2(::Class_1_B1CC8F53861C28C2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDMSG_B__46_2_OFFSET))(this, data);
		}

		::System::Void _OnClickSendFriendEmoji_b__52_1(::Class_1_B1CC8F53861C28C2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDEMOJI_B__52_1_OFFSET))(this, data);
		}

		::System::Void _InitEmptyCircleContent_b__77_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__INITEMPTYCIRCLECONTENT_B__77_1_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleMsg_b__82_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEMSG_B__82_2_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleEmoji_b__83_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEEMOJI_B__83_0_OFFSET))(this);
		}
	};
}
