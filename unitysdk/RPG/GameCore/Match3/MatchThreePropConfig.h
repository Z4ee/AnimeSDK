#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_MATCHTHREEPROPCONFIG_METHOD_2_9A0ED06FBA2DC4CC_OFFSET UNITYSDK_OFFSET(0x1BD2A030)
#define RPG_GAMECORE_MATCH3_MATCHTHREEPROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2A350)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThreePropConfig_TypeDefinitionIndex = 24072;

	class MatchThreePropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PropID; // 0x10
		::RPG::GameCore::MatchThreePropType PropType; // 0x14
		::System::UInt32 PropCount; // 0x18
		::System::UInt32 InputGridCount; // 0x1C
		::System::String* IconPath; // 0x20
		::RPG::Client::TextID DescText; // 0x28
		::RPG::Client::TextID HintText; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREEPROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9A0ED06FBA2DC4CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::MatchThreePropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::MatchThreePropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREEPROPCONFIG_METHOD_2_9A0ED06FBA2DC4CC_OFFSET))(a1, a2);
		}
	};
}
