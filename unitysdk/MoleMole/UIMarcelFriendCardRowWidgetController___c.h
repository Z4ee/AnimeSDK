#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC2B00)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC2B40)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__ONCLICKINVITECALLBACK_B__13_1_OFFSET UNITYSDK_OFFSET(0x15DC2B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelFriendCardRowWidgetController___c_TypeDefinitionIndex = 56937;

	class UIMarcelFriendCardRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMarcelFriendCardRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMarcelFriendCardRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMarcelFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35250);
		}
		static ::System::Action_2<::System::Int32, ::System::Int32>** StaticGet___9__13_1()
		{
			return (::System::Action_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMarcelFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickInviteCallback_b__13_1(::System::Int32 code, ::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__ONCLICKINVITECALLBACK_B__13_1_OFFSET))(this, code, seconds);
		}
	};
}
