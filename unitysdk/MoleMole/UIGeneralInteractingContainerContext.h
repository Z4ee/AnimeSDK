#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F83A003C5E29080_2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALINTERACTINGCONTAINERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185A2580)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralInteractingContainerContext_TypeDefinitionIndex = 62409;

	class UIGeneralInteractingContainerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_5F83A003C5E29080_2 ShowType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTERACTINGCONTAINERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
