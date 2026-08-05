#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2BF8C713045E78D9;

#define MOLEMOLE_UIURBANMAPMISSIONPROGRESSROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x140D9AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapMissionProgressRowContext_TypeDefinitionIndex = 88699;

	class UIUrbanMapMissionProgressRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_2BF8C713045E78D9* CollectData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPMISSIONPROGRESSROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
