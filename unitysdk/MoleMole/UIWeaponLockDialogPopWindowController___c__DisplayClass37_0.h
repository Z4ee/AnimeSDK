#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F7CAAD54879BD084;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS37_0__COMPUTESMARTLOCKRESULT_B__5_OFFSET UNITYSDK_OFFSET(0x11E31D30)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS37_0__COMPUTESMARTLOCKRESULT_B__9_OFFSET UNITYSDK_OFFSET(0x11E31CD0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E31CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeaponLockDialogPopWindowController___c__DisplayClass37_0_TypeDefinitionIndex = 81970;

	class UIWeaponLockDialogPopWindowController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Func_2<::Class_2_F7CAAD54879BD084*, ::System::Boolean>* __9__9; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* pendingSet; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* lockPool; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ComputeSmartLockResult_b__9(::Class_2_F7CAAD54879BD084* w)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_F7CAAD54879BD084*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS37_0__COMPUTESMARTLOCKRESULT_B__9_OFFSET))(this, w);
		}

		::System::Boolean _ComputeSmartLockResult_b__5(::Class_2_F7CAAD54879BD084* w)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_F7CAAD54879BD084*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS37_0__COMPUTESMARTLOCKRESULT_B__5_OFFSET))(this, w);
		}
	};
}
