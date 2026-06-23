#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_4E7D4B0E2476C0A5;

#define MOLEMOLE_UIHOUSERHYTHMPREPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x172196E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmPrepContext_TypeDefinitionIndex = 63683;

	class UIHouseRhythmPrepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_4E7D4B0E2476C0A5* HouseRhythmData; // 0x28
		::System::Int32 showCharacterID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPREPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
