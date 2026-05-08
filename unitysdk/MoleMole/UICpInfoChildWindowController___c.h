#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICpInfoChildWindowController_UITagInfo.h"
#include "unitysdk/MoleMole/UICpInfoChildWindowController_UIViewInfo.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B274200)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B274240)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1B274250)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___C___CCTOR_B__53_1_OFFSET UNITYSDK_OFFSET(0x1B274270)

namespace MoleMole
{
	inline static constexpr unsigned int UICpInfoChildWindowController___c_TypeDefinitionIndex = 85266;

	class UICpInfoChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICpInfoChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UICpInfoChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UICpInfoChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__53_0(::MoleMole::UICpInfoChildWindowController_UIViewInfo l, ::MoleMole::UICpInfoChildWindowController_UIViewInfo r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UICpInfoChildWindowController_UIViewInfo, ::MoleMole::UICpInfoChildWindowController_UIViewInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___C___CCTOR_B__53_0_OFFSET))(this, l, r);
		}

		::System::Int32 __cctor_b__53_1(::MoleMole::UICpInfoChildWindowController_UITagInfo l, ::MoleMole::UICpInfoChildWindowController_UITagInfo r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UICpInfoChildWindowController_UITagInfo, ::MoleMole::UICpInfoChildWindowController_UITagInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___C___CCTOR_B__53_1_OFFSET))(this, l, r);
		}
	};
}
