#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_8459E51EACDDD3EF;

#define MOLEMOLE_UIURBANMAPMISSIONPROGRESSROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x126A8280)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapMissionProgressRowContext_TypeDefinitionIndex = 75246;

	class UIUrbanMapMissionProgressRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_8459E51EACDDD3EF* CollectData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPMISSIONPROGRESSROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
