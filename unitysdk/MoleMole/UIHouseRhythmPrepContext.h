#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_8C395384B7FBB329;

#define MOLEMOLE_UIHOUSERHYTHMPREPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x190F5340)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmPrepContext_TypeDefinitionIndex = 79028;

	class UIHouseRhythmPrepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_8C395384B7FBB329* HouseRhythmData; // 0x28
		::System::Int32 showCharacterID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPREPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
