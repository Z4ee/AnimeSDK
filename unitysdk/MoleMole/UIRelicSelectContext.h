#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15A8EF2824547B27.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRELICSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11B9C9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRelicSelectContext_TypeDefinitionIndex = 56587;

	class UIRelicSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_15A8EF2824547B27 ShowType; // 0x28
		::System::UInt32 initialRelicUID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRELICSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
