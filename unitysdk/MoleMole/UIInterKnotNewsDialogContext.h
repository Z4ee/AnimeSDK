#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINTERKNOTNEWSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19856220)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsDialogContext_TypeDefinitionIndex = 84609;

	class UIInterKnotNewsDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 GroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
