#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDADDFRIENDREQUESTBTN_B__16_2_OFFSET UNITYSDK_OFFSET(0x16A8D8D0)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDADDFRIENDREQUESTBTN_B__16_4_OFFSET UNITYSDK_OFFSET(0x16A8D990)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDNONFRIENDPCBTN_B__14_1_OFFSET UNITYSDK_OFFSET(0x16A8D860)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A8D810)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8D850)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendCardRowWidgetController___c_TypeDefinitionIndex = 69739;

	class UIFriendCardRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__16_2()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F0C0);
		}
		static ::System::Action** StaticGet___9__14_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F0C8);
		}
		static ::MoleMole::UIFriendCardRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIFriendCardRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F0D0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__16_4()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F0D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindNonFriendPCBtn_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDNONFRIENDPCBTN_B__14_1_OFFSET))(this);
		}

		::System::Void _BindAddFriendRequestBtn_b__16_2(::System::Boolean isDeleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDADDFRIENDREQUESTBTN_B__16_2_OFFSET))(this, isDeleted);
		}

		::System::Void _BindAddFriendRequestBtn_b__16_4(::System::Boolean isDeleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDADDFRIENDREQUESTBTN_B__16_4_OFFSET))(this, isDeleted);
		}
	};
}
