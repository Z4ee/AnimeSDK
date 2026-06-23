#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1CC8F53861C28C2;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187D2FF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187D3030)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__INITEMPTYCIRCLECONTENT_B__78_1_OFFSET UNITYSDK_OFFSET(0x187D3060)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEEMOJI_B__84_0_OFFSET UNITYSDK_OFFSET(0x187D3080)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEMSG_B__83_2_OFFSET UNITYSDK_OFFSET(0x187D3070)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDEMOJI_B__53_1_OFFSET UNITYSDK_OFFSET(0x187D3050)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDMSG_B__47_2_OFFSET UNITYSDK_OFFSET(0x187D3040)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c_TypeDefinitionIndex = 50170;

	class UIChatWindowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIChatWindowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIChatWindowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34550);
		}
		static ::System::Action** StaticGet___9__83_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34558);
		}
		static ::System::Action** StaticGet___9__84_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34560);
		}
		static ::System::Action** StaticGet___9__78_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34568);
		}
		static ::System::Action_1<::Class_1_B1CC8F53861C28C2*>** StaticGet___9__53_1()
		{
			return (::System::Action_1<::Class_1_B1CC8F53861C28C2*>**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34570);
		}
		static ::System::Action_1<::Class_1_B1CC8F53861C28C2*>** StaticGet___9__47_2()
		{
			return (::System::Action_1<::Class_1_B1CC8F53861C28C2*>**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSendFriendMsg_b__47_2(::Class_1_B1CC8F53861C28C2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDMSG_B__47_2_OFFSET))(this, data);
		}

		::System::Void _OnClickSendFriendEmoji_b__53_1(::Class_1_B1CC8F53861C28C2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDEMOJI_B__53_1_OFFSET))(this, data);
		}

		::System::Void _InitEmptyCircleContent_b__78_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__INITEMPTYCIRCLECONTENT_B__78_1_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleMsg_b__83_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEMSG_B__83_2_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleEmoji_b__84_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEEMOJI_B__84_0_OFFSET))(this);
		}
	};
}
