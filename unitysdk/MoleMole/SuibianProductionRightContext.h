#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SUIBIANPRODUCTIONRIGHTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1642EE10)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianProductionRightContext_TypeDefinitionIndex = 46875;

	class SuibianProductionRightContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::UInt32>* OnSelectBuddy; // 0x28
		::System::UInt32 CraftBenchID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANPRODUCTIONRIGHTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
