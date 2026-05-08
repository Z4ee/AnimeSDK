#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_EBE2BDD5F8C33F00;

#define MOLEMOLE_UICINEMACOLLECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15657330)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectPageContext_TypeDefinitionIndex = 67536;

	class UICinemaCollectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_EBE2BDD5F8C33F00* collectHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
