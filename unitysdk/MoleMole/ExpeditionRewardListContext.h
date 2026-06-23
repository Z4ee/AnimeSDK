#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_83DE381565FB61D2;

#define MOLEMOLE_EXPEDITIONREWARDLISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x161CB280)

namespace MoleMole
{
	inline static constexpr unsigned int ExpeditionRewardListContext_TypeDefinitionIndex = 87575;

	class ExpeditionRewardListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_83DE381565FB61D2* LayerData; // 0x28
		::System::Boolean useCache; // 0x30
		::System::Boolean isShowNormal; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONREWARDLISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
