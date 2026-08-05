#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIHOUSERHYTHMTASKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C684C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmTaskContext_TypeDefinitionIndex = 79115;

	class UIHouseRhythmTaskContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Pic; // 0x28
		::System::Int32 QuestID; // 0x30
		::System::Int32 TrackQuest; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMTASKCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
