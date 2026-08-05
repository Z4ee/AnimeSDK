#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18863440)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18863480)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__ONSELECTAVATAR_B__33_0_OFFSET UNITYSDK_OFFSET(0x18863490)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickEditPopWindowController___c_TypeDefinitionIndex = 70117;

	class UIQuickEditPopWindowController___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__33_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIQuickEditPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x331A0);
		}
		static ::MoleMole::UIQuickEditPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIQuickEditPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIQuickEditPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x331A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectAvatar_b__33_0(::Class_0_16E4307DCC419505_36* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__ONSELECTAVATAR_B__33_0_OFFSET))(this, e);
		}
	};
}
