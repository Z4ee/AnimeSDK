#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICpEndingChildWindowController_CpDamageInfo.h"
#include "unitysdk/MoleMole/UICpEndingChildWindowController_CpItemInfo.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E404E10)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E404E50)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___C__SETITEMLISTINFO_B__19_0_OFFSET UNITYSDK_OFFSET(0x1E404E60)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E404E80)

namespace MoleMole
{
	inline static constexpr unsigned int UICpEndingChildWindowController___c_TypeDefinitionIndex = 90805;

	class UICpEndingChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UICpEndingChildWindowController_CpItemInfo>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::MoleMole::UICpEndingChildWindowController_CpItemInfo>**)Il2CppClass::FromTypeDefinitionIndex(UICpEndingChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4E530);
		}
		static ::MoleMole::UICpEndingChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UICpEndingChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UICpEndingChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4E538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetItemListInfo_b__19_0(::MoleMole::UICpEndingChildWindowController_CpItemInfo l, ::MoleMole::UICpEndingChildWindowController_CpItemInfo r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UICpEndingChildWindowController_CpItemInfo, ::MoleMole::UICpEndingChildWindowController_CpItemInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___C__SETITEMLISTINFO_B__19_0_OFFSET))(this, l, r);
		}

		::System::Int32 __cctor_b__33_0(::MoleMole::UICpEndingChildWindowController_CpDamageInfo l, ::MoleMole::UICpEndingChildWindowController_CpDamageInfo r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UICpEndingChildWindowController_CpDamageInfo, ::MoleMole::UICpEndingChildWindowController_CpDamageInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___C___CCTOR_B__33_0_OFFSET))(this, l, r);
		}
	};
}
