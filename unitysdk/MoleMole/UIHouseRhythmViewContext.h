#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_42D261F216EFB78D;

#define MOLEMOLE_UIHOUSERHYTHMVIEWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18858D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmViewContext_TypeDefinitionIndex = 50718;

	class UIHouseRhythmViewContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_42D261F216EFB78D* timelineHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMVIEWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
