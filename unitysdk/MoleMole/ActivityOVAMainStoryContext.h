#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYOVAMAINSTORYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xFE89600)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityOVAMainStoryContext_TypeDefinitionIndex = 69863;

	class ActivityOVAMainStoryContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 storyConfigID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYOVAMAINSTORYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
