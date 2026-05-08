#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIFISHINGCONTESTRESULTMISSIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x149BC940)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestResultMissionContext_TypeDefinitionIndex = 79393;

	class UIFishingContestResultMissionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TextKey; // 0x28
		::System::Boolean Success; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTMISSIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
