#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UINEWBIEGUIDEFETCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1867B9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideFetchContext_TypeDefinitionIndex = 86959;

	class UINewbieGuideFetchContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* fetchCallback; // 0x28
		::System::Action* cancelCallback; // 0x30
		::System::Int32 avatarID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEFETCHCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
