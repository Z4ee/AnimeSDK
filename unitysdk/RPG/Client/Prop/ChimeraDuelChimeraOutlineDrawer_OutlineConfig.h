#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_OUTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189E3AA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelChimeraOutlineDrawer_OutlineConfig_TypeDefinitionIndex = 77858;

	class ChimeraDuelChimeraOutlineDrawer_OutlineConfig : public ::System::Object
	{
	public:
		::UnityEngine::Color Color; // 0x10
		::System::Single Width; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_OUTLINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
