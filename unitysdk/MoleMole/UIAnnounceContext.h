#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_96232DA6A41AD866;

#define MOLEMOLE_UIANNOUNCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x181BC6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAnnounceContext_TypeDefinitionIndex = 60255;

	class UIAnnounceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_96232DA6A41AD866* uiAnnounce; // 0x28

		::System::Void _ctor(::Class_1_96232DA6A41AD866* uiAnnounce)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_96232DA6A41AD866*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCECONTEXT__CTOR_OFFSET))(this, uiAnnounce);
		}
	};
}
