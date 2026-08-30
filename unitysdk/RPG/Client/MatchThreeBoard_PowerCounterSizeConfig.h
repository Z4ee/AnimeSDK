#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEBOARD_POWERCOUNTERSIZECONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0xD634130)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex = 65948;

	struct alignas(8) MatchThreeBoard_PowerCounterSizeConfig
	{
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_M()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex)->GetStaticField(0x65D70);
		}
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_S()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex)->GetStaticField(0x65D80);
		}
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_L()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex)->GetStaticField(0x65D90);
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
