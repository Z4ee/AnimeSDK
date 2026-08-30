#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDADDDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_PingPongUIInfo_TypeDefinitionIndex = 66495;

	class PingPongModule_PingPongUIInfo : public ::System::Object
	{
	public:
		::System::String* SPSkillBtnImage; // 0x10
		::System::Single SPRatio; // 0x18
		::System::Boolean SPSkillBan; // 0x1C
		::System::Boolean MPSkillBan; // 0x1D
		::System::Single MPRatio; // 0x20
		::System::Single HPRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO__CTOR_OFFSET))(this);
		}
	};
}
