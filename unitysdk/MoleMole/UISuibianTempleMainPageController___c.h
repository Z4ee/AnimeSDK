#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16174580)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161745C0)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__REFRESHTRACK_B__43_0_OFFSET UNITYSDK_OFFSET(0x161745D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleMainPageController___c_TypeDefinitionIndex = 49060;

	class UISuibianTempleMainPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x37EA0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__43_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x37EA8);
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
