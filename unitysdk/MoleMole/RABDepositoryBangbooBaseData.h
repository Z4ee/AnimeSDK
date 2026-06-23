#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_RABDEPOSITORYBANGBOOBASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDE570)

namespace MoleMole
{
	inline static constexpr unsigned int RABDepositoryBangbooBaseData_TypeDefinitionIndex = 46154;

	class RABDepositoryBangbooBaseData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABDEPOSITORYBANGBOOBASEDATA__CTOR_OFFSET))(this);
		}
	};
}
