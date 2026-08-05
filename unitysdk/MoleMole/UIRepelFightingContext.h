#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_EA8F026699B496CE;

#define MOLEMOLE_UIREPELFIGHTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A86410)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelFightingContext_TypeDefinitionIndex = 64721;

	class UIRepelFightingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_EA8F026699B496CE* groupData; // 0x28
		::System::Int32 focusLevelIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
