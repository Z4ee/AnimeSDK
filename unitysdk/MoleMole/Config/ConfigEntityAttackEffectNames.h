#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTNAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x10D033B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffectNames_TypeDefinitionIndex = 40160;

	class ConfigEntityAttackEffectNames : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>* EffectNames; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTNAMES__CTOR_OFFSET))(this);
		}
	};
}
