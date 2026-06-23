#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTTVPARTICLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD5280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ItemCollectTVParticleConfig_TypeDefinitionIndex = 64382;

	class ConfigHollowChessboard_ItemCollectTVParticleConfig : public ::System::Object
	{
	public:
		::System::String* TVParticlePath; // 0x10
		::UnityEngine::Color OverrideFadeInColor; // 0x18
		::System::Int32 Priority; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTTVPARTICLECONFIG__CTOR_OFFSET))(this);
		}
	};
}
