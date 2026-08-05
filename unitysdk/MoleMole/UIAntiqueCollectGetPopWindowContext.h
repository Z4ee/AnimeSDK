#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIANTIQUECOLLECTGETPOPWINDOWCONTEXT_GET_COLLECTID_OFFSET UNITYSDK_OFFSET(0x197DD0A0)
#define MOLEMOLE_UIANTIQUECOLLECTGETPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197DD120)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueCollectGetPopWindowContext_TypeDefinitionIndex = 54401;

	class UIAntiqueCollectGetPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 forceCollectId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUECOLLECTGETPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CollectId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUECOLLECTGETPOPWINDOWCONTEXT_GET_COLLECTID_OFFSET))(this);
		}
	};
}
