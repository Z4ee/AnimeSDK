#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B8E7A0)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8E7E0)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C__SHOWDIALOGTEXTANDRESTARTGAME_B__4_0_OFFSET UNITYSDK_OFFSET(0x9B8E7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageBoxDialogUtil___c_TypeDefinitionIndex = 59683;

	class MessageBoxDialogUtil___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MessageBoxDialogUtil___c** StaticGet___9()
		{
			return (::RPG::Client::MessageBoxDialogUtil___c**)Il2CppClass::FromTypeDefinitionIndex(MessageBoxDialogUtil___c_TypeDefinitionIndex)->GetStaticField(0x30B30);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MessageBoxDialogUtil___c_TypeDefinitionIndex)->GetStaticField(0x30B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowDialogTextAndRestartGame_b__4_0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C__SHOWDIALOGTEXTANDRESTARTGAME_B__4_0_OFFSET))(this, isOk);
		}
	};
}
