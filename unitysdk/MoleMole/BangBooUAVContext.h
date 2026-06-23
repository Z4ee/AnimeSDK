#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_BANGBOOUAVCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13FEE010)

namespace MoleMole
{
	inline static constexpr unsigned int BangBooUAVContext_TypeDefinitionIndex = 81443;

	class BangBooUAVContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean DirectOpenLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOUAVCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
