#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYSEARCHOBJECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16337530)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySearchObjectContext_TypeDefinitionIndex = 42675;

	class UIActivitySearchObjectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* closeAction; // 0x28
		::System::Int32 scannerConfigID; // 0x30
		::System::Boolean isLast; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
