#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class ConvinceAnchorConfig; }
namespace RPG::Client { class ConvinceShakeConfig; }
namespace RPG::Client { class ConvinceSpliteLineConfig; }
namespace System { class String; }

#define RPG_CLIENT_CONVINCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1802A8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceConfig_TypeDefinitionIndex = 57950;

	class ConvinceConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* CONFIG_PATH; // 0x0
		::System::Boolean EndIfHPIsMinOrMax; // 0x18
		::RPG::Client::ConvinceAnchorConfig* Anchor; // 0x20
		::RPG::Client::ConvinceShakeConfig* Shake; // 0x28
		::RPG::Client::ConvinceSpliteLineConfig* SpliteLine; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCECONFIG__CTOR_OFFSET))(this);
		}
	};
}
