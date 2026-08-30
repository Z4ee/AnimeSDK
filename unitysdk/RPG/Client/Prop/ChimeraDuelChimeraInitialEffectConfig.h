#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class ChimeraDuelInitialEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAINITIALEFFECTCONFIG_QUERYINITIALEFFECT_OFFSET UNITYSDK_OFFSET(0x189DF7D0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAINITIALEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189DF950)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelChimeraInitialEffectConfig_TypeDefinitionIndex = 77848;

	class ChimeraDuelChimeraInitialEffectConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelInitialEffectConfig*>* EffectConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAINITIALEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean QueryInitialEffect(::System::UInt32 a1, ::RPG::Client::Prop::ChimeraDuelInitialEffectConfig*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::Prop::ChimeraDuelInitialEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAINITIALEFFECTCONFIG_QUERYINITIALEFFECT_OFFSET))(this, a1, a2);
		}
	};
}
