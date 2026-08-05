#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORBIDDENAREACOLLECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18582A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaCollectPageContext_TypeDefinitionIndex = 43277;

	class UIForbiddenAreaCollectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 GetCollectionId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREACOLLECTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
