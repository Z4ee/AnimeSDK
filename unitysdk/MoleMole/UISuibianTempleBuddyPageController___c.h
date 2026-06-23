#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C36F00)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C36F40)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER___C__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x15C36F50)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyPageController___c_TypeDefinitionIndex = 74716;

	class UISuibianTempleBuddyPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Threading::CancellationTokenSource*>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::System::Threading::CancellationTokenSource*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyPageController___c_TypeDefinitionIndex)->GetStaticField(0x48A20);
		}
		static ::MoleMole::UISuibianTempleBuddyPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleBuddyPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyPageController___c_TypeDefinitionIndex)->GetStaticField(0x48A28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Threading::CancellationTokenSource* _OnUIInit_b__4_0()
		{
			return ((::System::Threading::CancellationTokenSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER___C__ONUIINIT_B__4_0_OFFSET))(this);
		}
	};
}
