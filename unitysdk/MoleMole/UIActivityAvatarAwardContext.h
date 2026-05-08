#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;

#define MOLEMOLE_UIACTIVITYAVATARAWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16320980)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAvatarAwardContext_TypeDefinitionIndex = 78827;

	class UIActivityAvatarAwardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* componentActivityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
