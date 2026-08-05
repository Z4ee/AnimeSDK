#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_9D33A2E94B3E53DC;

#define MOLEMOLE_UISUMMERFISHACCUMULATEITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10EEDF50)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAccumulateItemContext_TypeDefinitionIndex = 74763;

	class UISummerFishAccumulateItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_9D33A2E94B3E53DC* Fish; // 0x28
		::System::Int32 Count; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHACCUMULATEITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
