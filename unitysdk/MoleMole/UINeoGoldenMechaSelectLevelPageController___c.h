#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155FB970)
#define MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155FB9B0)
#define MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__ONHIDE_B__9_0_OFFSET UNITYSDK_OFFSET(0x155FB9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UINeoGoldenMechaSelectLevelPageController___c_TypeDefinitionIndex = 59332;

	class UINeoGoldenMechaSelectLevelPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UINeoGoldenMechaSelectLevelPageController___c** StaticGet___9()
		{
			return (::MoleMole::UINeoGoldenMechaSelectLevelPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UINeoGoldenMechaSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x37C80);
		}
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UINeoGoldenMechaSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x37C88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnHide_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__ONHIDE_B__9_0_OFFSET))(this);
		}
	};
}
