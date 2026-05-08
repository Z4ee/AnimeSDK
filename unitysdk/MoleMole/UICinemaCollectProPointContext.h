#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_C31F776B3FE6F486_1;
namespace MoleMole { class UICinemaCollectPageController; }

#define MOLEMOLE_UICINEMACOLLECTPROPOINTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16EDFE00)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectProPointContext_TypeDefinitionIndex = 46199;

	class UICinemaCollectProPointContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_C31F776B3FE6F486_1* rewardData; // 0x28
		::MoleMole::UICinemaCollectPageController* collectPage; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
