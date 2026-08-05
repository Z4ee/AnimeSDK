#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_SUIBIANTEMPLEEXPEDITIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x129DAAE0)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleExpeditionContext_TypeDefinitionIndex = 49078;

	class SuibianTempleExpeditionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 layerID; // 0x28
		::System::Int32 focusAreaID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEEXPEDITIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
