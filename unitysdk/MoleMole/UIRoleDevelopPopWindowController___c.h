#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1380BAA0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1380BAE0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1380BAF0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__11_1_OFFSET UNITYSDK_OFFSET(0x1380BCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleDevelopPopWindowController___c_TypeDefinitionIndex = 87150;

	class UIRoleDevelopPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRoleDevelopPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleDevelopPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37E30);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__11_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37E38);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__11_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRoleDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__11_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__11_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__11_1_OFFSET))(this, success);
		}
	};
}
