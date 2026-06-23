#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B63590)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B635D0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__ONNORMALGRAPHEXIT_B__36_0_OFFSET UNITYSDK_OFFSET(0x15B635E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusTimeLinePageController___c_TypeDefinitionIndex = 65462;

	class UIChatPlusTimeLinePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIChatPlusTimeLinePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIChatPlusTimeLinePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIChatPlusTimeLinePageController___c_TypeDefinitionIndex)->GetStaticField(0x4B110);
		}
		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatPlusTimeLinePageController___c_TypeDefinitionIndex)->GetStaticField(0x4B118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnNormalGraphExit_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__ONNORMALGRAPHEXIT_B__36_0_OFFSET))(this);
		}
	};
}
