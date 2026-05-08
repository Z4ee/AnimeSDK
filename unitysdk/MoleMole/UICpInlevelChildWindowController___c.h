#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICpInlevelChildWindowController_TagInfo.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF98810)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF98850)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___C___CCTOR_B__136_0_OFFSET UNITYSDK_OFFSET(0x1BF98860)

namespace MoleMole
{
	inline static constexpr unsigned int UICpInlevelChildWindowController___c_TypeDefinitionIndex = 85329;

	class UICpInlevelChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICpInlevelChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UICpInlevelChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UICpInlevelChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__136_0(::MoleMole::UICpInlevelChildWindowController_TagInfo l, ::MoleMole::UICpInlevelChildWindowController_TagInfo r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UICpInlevelChildWindowController_TagInfo, ::MoleMole::UICpInlevelChildWindowController_TagInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___C___CCTOR_B__136_0_OFFSET))(this, l, r);
		}
	};
}
