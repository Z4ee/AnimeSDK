#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1CC8F53861C28C2;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19711260)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197112A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__INITEMPTYCIRCLECONTENT_B__80_1_OFFSET UNITYSDK_OFFSET(0x197112D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEEMOJI_B__86_0_OFFSET UNITYSDK_OFFSET(0x197112F0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEMSG_B__85_2_OFFSET UNITYSDK_OFFSET(0x197112E0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDEMOJI_B__55_1_OFFSET UNITYSDK_OFFSET(0x197112C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDMSG_B__49_2_OFFSET UNITYSDK_OFFSET(0x197112B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c_TypeDefinitionIndex = 72754;

	class UIChatWindowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__80_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36B40);
		}
		static ::System::Action_1<::Class_1_B1CC8F53861C28C2*>** StaticGet___9__55_1()
		{
			return (::System::Action_1<::Class_1_B1CC8F53861C28C2*>**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36B48);
		}
		static ::System::Action_1<::Class_1_B1CC8F53861C28C2*>** StaticGet___9__49_2()
		{
			return (::System::Action_1<::Class_1_B1CC8F53861C28C2*>**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36B50);
		}
		static ::MoleMole::UIChatWindowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIChatWindowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36B58);
		}
		static ::System::Action** StaticGet___9__85_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36B60);
		}
		static ::System::Action** StaticGet___9__86_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36B68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSendFriendMsg_b__49_2(::Class_1_B1CC8F53861C28C2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDMSG_B__49_2_OFFSET))(this, data);
		}

		::System::Void _OnClickSendFriendEmoji_b__55_1(::Class_1_B1CC8F53861C28C2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDEMOJI_B__55_1_OFFSET))(this, data);
		}

		::System::Void _InitEmptyCircleContent_b__80_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__INITEMPTYCIRCLECONTENT_B__80_1_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleMsg_b__85_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEMSG_B__85_2_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleEmoji_b__86_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEEMOJI_B__86_0_OFFSET))(this);
		}
	};
}
