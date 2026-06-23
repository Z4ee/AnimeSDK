#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;

#define MOLEMOLE_UIBOTTLELOGINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14C06820)

namespace MoleMole
{
	inline static constexpr unsigned int UIBottleLoginContext_TypeDefinitionIndex = 73439;

	class UIBottleLoginContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* activityData; // 0x28
		::System::Int32 questArgs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
