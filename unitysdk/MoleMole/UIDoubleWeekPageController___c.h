#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19716A70)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19716AB0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__INITVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x19716AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleWeekPageController___c_TypeDefinitionIndex = 65952;

	class UIDoubleWeekPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIDoubleWeekPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDoubleWeekPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleWeekPageController___c_TypeDefinitionIndex)->GetStaticField(0x36BC0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__11_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleWeekPageController___c_TypeDefinitionIndex)->GetStaticField(0x36BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__INITVIEW_B__11_0_OFFSET))(this);
		}
	};
}
