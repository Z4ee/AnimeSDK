#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDEFENCELARGETVCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17702540)

namespace MoleMole
{
	inline static constexpr unsigned int UIDefenceLargeTVContext_TypeDefinitionIndex = 74959;

	class UIDefenceLargeTVContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 initPercent; // 0x28
		::System::Boolean isLeftJustify; // 0x2C
		::System::Boolean needFlush; // 0x2D
		::System::Boolean ShowNumber; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEFENCELARGETVCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
