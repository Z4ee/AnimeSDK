#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E93260)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E932A0)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__REFRESHTRACK_B__43_0_OFFSET UNITYSDK_OFFSET(0x15E932B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleMainPageController___c_TypeDefinitionIndex = 89148;

	class UISuibianTempleMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__43_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A890);
		}
		static ::MoleMole::UISuibianTempleMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A898);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshTrack_b__43_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__REFRESHTRACK_B__43_0_OFFSET))(this);
		}
	};
}
