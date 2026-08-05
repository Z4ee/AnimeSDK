#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F13570)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F135B0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__ONUIINIT_B__25_0_OFFSET UNITYSDK_OFFSET(0x10F135C0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__ONUIOPEN_B__26_0_OFFSET UNITYSDK_OFFSET(0x10F13680)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPreparePageController___c_TypeDefinitionIndex = 80718;

	class UIZenkovPreparePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIZenkovPreparePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovPreparePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPreparePageController___c_TypeDefinitionIndex)->GetStaticField(0x4EC60);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__25_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPreparePageController___c_TypeDefinitionIndex)->GetStaticField(0x4EC68);
		}
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPreparePageController___c_TypeDefinitionIndex)->GetStaticField(0x4EC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__25_0(::System::Object* payload)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__ONUIINIT_B__25_0_OFFSET))(this, payload);
		}

		::System::Void _OnUIOpen_b__26_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__ONUIOPEN_B__26_0_OFFSET))(this, _);
		}
	};
}
