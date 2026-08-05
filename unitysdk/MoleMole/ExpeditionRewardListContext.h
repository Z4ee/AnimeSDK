#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_45C1DDE65CB117DE;

#define MOLEMOLE_EXPEDITIONREWARDLISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B951AC0)

namespace MoleMole
{
	inline static constexpr unsigned int ExpeditionRewardListContext_TypeDefinitionIndex = 76666;

	class ExpeditionRewardListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_45C1DDE65CB117DE* LayerData; // 0x28
		::System::Boolean isShowNormal; // 0x30
		::System::Boolean useCache; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONREWARDLISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
