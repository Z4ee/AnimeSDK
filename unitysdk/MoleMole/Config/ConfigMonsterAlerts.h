#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigMonsterAlertItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS__CTOR_OFFSET UNITYSDK_OFFSET(0x192A1FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_TypeDefinitionIndex = 82857;

	class ConfigMonsterAlerts : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>* BlockColliderLayers; // 0x58
		::System::Collections::Generic::HashSet_1<::System::String*>* BlockColliderTags; // 0x60
		::System::Single BattleSlopAngle; // 0x68
		::System::Collections::Generic::HashSet_1<::System::String*>* IgnoreZoneTags; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMonsterAlertItem*>* AlertItemConfigs; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS__CTOR_OFFSET))(this);
		}
	};
}
