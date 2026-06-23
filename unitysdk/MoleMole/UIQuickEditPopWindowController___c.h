#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;

#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178E8B70)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178E8BB0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__ONSELECTAVATAR_B__31_0_OFFSET UNITYSDK_OFFSET(0x178E8BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickEditPopWindowController___c_TypeDefinitionIndex = 51851;

	class UIQuickEditPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIQuickEditPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIQuickEditPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIQuickEditPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x31000);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__31_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(UIQuickEditPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x31008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectAvatar_b__31_0(::Class_0_16E4307DCC419505_29* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__ONSELECTAVATAR_B__31_0_OFFSET))(this, e);
		}
	};
}
