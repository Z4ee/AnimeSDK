#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_REASONROW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC9C50)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingEffectProfilerDebugView_ReasonRow_TypeDefinitionIndex = 72363;

	class ChenLingEffectProfilerDebugView_ReasonRow : public ::System::Object
	{
	public:
		::System::String* Reason; // 0x10
		::System::Int64 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_REASONROW__CTOR_OFFSET))(this);
		}
	};
}
