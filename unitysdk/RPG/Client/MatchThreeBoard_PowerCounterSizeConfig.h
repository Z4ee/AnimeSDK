#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEBOARD_POWERCOUNTERSIZECONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B337E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex = 53523;

	struct alignas(8) MatchThreeBoard_PowerCounterSizeConfig
	{
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_M()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex)->GetStaticField(0x2F400);
		}
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_S()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex)->GetStaticField(0x2F410);
		}
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_L()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex)->GetStaticField(0x2F420);
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
