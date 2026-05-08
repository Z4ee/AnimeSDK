#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSARPEGGIOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17075720)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioContext_TypeDefinitionIndex = 43998;

	class UIAbyssArpeggioContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ChapterId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
