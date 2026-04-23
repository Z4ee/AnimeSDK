#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class AccountList; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_ACCOUNTLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176AB220)
#define MIHOYO_SDK_WIN_ACCOUNTLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176AB260)
#define MIHOYO_SDK_WIN_ACCOUNTLIST___C__SHOW_B__45_0_OFFSET UNITYSDK_OFFSET(0x176AB270)
#define MIHOYO_SDK_WIN_ACCOUNTLIST___C__UPDATESELECTEDACCOUNTINFO_B__60_0_OFFSET UNITYSDK_OFFSET(0x176AB2B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList___c_TypeDefinitionIndex = 8048;

	class AccountList___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::AccountList___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::AccountList___c**)Il2CppClass::FromTypeDefinitionIndex(AccountList___c_TypeDefinitionIndex)->GetStaticField(0x26CB0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::AccountList*>** StaticGet___9__45_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::AccountList*>**)Il2CppClass::FromTypeDefinitionIndex(AccountList___c_TypeDefinitionIndex)->GetStaticField(0x26CB8);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet___9__60_0()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AccountList___c_TypeDefinitionIndex)->GetStaticField(0x26CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__45_0(::MiHoYo::SDK::Win::AccountList* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::AccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C__SHOW_B__45_0_OFFSET))(this, dialog);
		}

		::System::Void _UpdateSelectedAccountInfo_b__60_0(::UnityEngine::GameObject* imageGameObject, ::System::String* strImageName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C__UPDATESELECTEDACCOUNTINFO_B__60_0_OFFSET))(this, imageGameObject, strImageName);
		}
	};
}
