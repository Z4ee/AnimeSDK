#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/CharacterDamageDecalType.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL__CTOR_OFFSET UNITYSDK_OFFSET(0x144E67D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSpecialEffectHitWall_TypeDefinitionIndex = 75196;

	class ConfigSpecialEffectHitWall : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterDamageDecalType>* EffectDecalTypes; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DamageDecalData>* DamageDecalConfigs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL__CTOR_OFFSET))(this);
		}
	};
}
