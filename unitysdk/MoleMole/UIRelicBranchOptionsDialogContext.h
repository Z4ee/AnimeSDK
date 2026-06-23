#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardOptionsDialogContext.h"

class Class_1_4F9417780723166C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRELICBRANCHOPTIONSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152AED70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRelicBranchOptionsDialogContext_TypeDefinitionIndex = 72383;

	class UIRelicBranchOptionsDialogContext : public ::MoleMole::UIHollowCardOptionsDialogContext
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>*>* _relicRoleDict; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRELICBRANCHOPTIONSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
