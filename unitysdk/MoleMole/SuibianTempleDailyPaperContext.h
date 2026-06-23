#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_SUIBIANTEMPLEDAILYPAPERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12656520)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleDailyPaperContext_TypeDefinitionIndex = 70372;

	class SuibianTempleDailyPaperContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 initTab; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEDAILYPAPERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
