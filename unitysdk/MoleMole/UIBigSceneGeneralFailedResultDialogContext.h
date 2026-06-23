#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIBIGSCENEGENERALFAILEDRESULTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17608460)

namespace MoleMole
{
	inline static constexpr unsigned int UIBigSceneGeneralFailedResultDialogContext_TypeDefinitionIndex = 80404;

	class UIBigSceneGeneralFailedResultDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnFairyAction; // 0x28
		::System::Action* OnDownAction; // 0x30
		::System::Action* OnReviveAction; // 0x38
		::System::UInt32 KillerGroupID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENEGENERALFAILEDRESULTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
