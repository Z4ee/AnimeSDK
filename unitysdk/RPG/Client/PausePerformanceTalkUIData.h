#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PAUSEPERFORMANCETALKUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDA91A40)

namespace RPG::Client
{
	inline static constexpr unsigned int PausePerformanceTalkUIData_TypeDefinitionIndex = 60729;

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
