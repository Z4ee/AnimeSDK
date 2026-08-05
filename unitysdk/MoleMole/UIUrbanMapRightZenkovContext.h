#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_830515DDEC4B1D1B.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPRIGHTZENKOVCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188B2CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightZenkovContext_TypeDefinitionIndex = 59064;

	class UIUrbanMapRightZenkovContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_830515DDEC4B1D1B rightTabType; // 0x28
		::System::Int32 selectQuestId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTZENKOVCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
