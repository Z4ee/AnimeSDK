#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197EB9A0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197EB9E0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x197EB9F0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_1_OFFSET UNITYSDK_OFFSET(0x197EBBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDevelopPopWindowController___c_TypeDefinitionIndex = 42588;

	class UIBangbooDevelopPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EAA0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EAA8);
		}
		static ::MoleMole::UIBangbooDevelopPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooDevelopPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_1_OFFSET))(this, success);
		}
	};
}
