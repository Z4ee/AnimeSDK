#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWEAPONLOCKDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D80DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeaponLockDialogContext_TypeDefinitionIndex = 77609;

	class UIWeaponLockDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* WeaponItemList; // 0x28
		::System::Action_1<::System::Boolean>* OnBatchOperationDone; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
