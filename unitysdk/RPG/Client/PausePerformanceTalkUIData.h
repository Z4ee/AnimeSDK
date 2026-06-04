#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PAUSEPERFORMANCETALKUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC350FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PausePerformanceTalkUIData_TypeDefinitionIndex = 56760;

	class PausePerformanceTalkUIData : public ::System::Object
	{
	public:
		::System::Int32 SimpleTalkClipTimeMS; // 0x10
		::System::Boolean IsPause; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAUSEPERFORMANCETALKUIDATA__CTOR_OFFSET))(this);
		}
	};
}
