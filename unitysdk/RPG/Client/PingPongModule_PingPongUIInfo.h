#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F6DAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_PingPongUIInfo_TypeDefinitionIndex = 54057;

	class PingPongModule_PingPongUIInfo : public ::System::Object
	{
	public:
		::System::String* SPSkillBtnImage; // 0x10
		::System::Single SPRatio; // 0x18
		::System::Single MPRatio; // 0x1C
		::System::Single HPRatio; // 0x20
		::System::Boolean MPSkillBan; // 0x24
		::System::Boolean SPSkillBan; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO__CTOR_OFFSET))(this);
		}
	};
}
