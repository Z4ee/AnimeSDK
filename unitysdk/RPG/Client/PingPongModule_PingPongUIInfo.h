#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A6450)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_PingPongUIInfo_TypeDefinitionIndex = 62144;

	class PingPongModule_PingPongUIInfo : public ::System::Object
	{
	public:
		::System::String* SPSkillBtnImage; // 0x10
		::System::Single SPRatio; // 0x18
		::System::Single HPRatio; // 0x1C
		::System::Boolean SPSkillBan; // 0x20
		::System::Boolean MPSkillBan; // 0x21
		::System::Single MPRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO__CTOR_OFFSET))(this);
		}
	};
}
