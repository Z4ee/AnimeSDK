#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }

#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69D700)
#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS33_0___GETCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0x1A69E2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessModule___c__DisplayClass33_0_TypeDefinitionIndex = 63713;

	class EarlyAccessModule___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::UInt32 contentID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetContent_b__0(::RPG::Client::EarlyAccessContent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS33_0___GETCONTENT_B__0_OFFSET))(this, a1);
		}
	};
}
