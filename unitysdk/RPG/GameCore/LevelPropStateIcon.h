#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelPropStateIconCategory.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPROPSTATEICON_METHOD_2_E1BA8C3439B27B7B_OFFSET UNITYSDK_OFFSET(0x1D1ECB30)
#define RPG_GAMECORE_LEVELPROPSTATEICON__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1ECD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropStateIcon_TypeDefinitionIndex = 17040;

	class LevelPropStateIcon : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPropStateIconCategory Category; // 0x10
		::RPG::GameCore::PropState State; // 0x14
		::System::String* TimeRewindState; // 0x18
		::System::UInt32 IconID; // 0x20
		::System::String* Color; // 0x28
		::System::String* AnchorKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSTATEICON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E1BA8C3439B27B7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropStateIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropStateIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSTATEICON_METHOD_2_E1BA8C3439B27B7B_OFFSET))(a1, a2);
		}
	};
}
