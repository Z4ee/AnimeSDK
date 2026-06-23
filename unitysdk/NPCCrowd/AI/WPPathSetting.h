#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_WPPATHSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x8C28500)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPPathSetting_TypeDefinitionIndex = 41806;

	class WPPathSetting : public ::System::Object
	{
	public:
		::System::Single lineSpace; // 0x10
		::System::Byte numberOfWays; // 0x14
		::System::Byte pathDirection; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHSETTING__CTOR_OFFSET))(this);
		}
	};
}
