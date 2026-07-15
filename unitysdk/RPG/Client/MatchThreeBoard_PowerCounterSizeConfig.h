#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEBOARD_POWERCOUNTERSIZECONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8975F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex = 62963;

	struct alignas(8) MatchThreeBoard_PowerCounterSizeConfig
	{
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_L()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex)->GetStaticField(0x45920);
		}
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_S()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex)->GetStaticField(0x45930);
		}
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_M()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex)->GetStaticField(0x45940);
		}
		::System::Int32 FontSize; // 0x10
		::System::Single ShadowOffset; // 0x14
		::System::String* Anim; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_POWERCOUNTERSIZECONFIG__CCTOR_OFFSET))();
		}
	};
}
