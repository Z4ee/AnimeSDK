#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_6F28FFD006F2B451;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBALLGAMECONFLATEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E173E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameConflateDialogPopWindowController_Context_TypeDefinitionIndex = 89362;

	class UIBallGameConflateDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* SourceEventIDList; // 0x28
		::Class_3_6F28FFD006F2B451* world; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECONFLATEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
