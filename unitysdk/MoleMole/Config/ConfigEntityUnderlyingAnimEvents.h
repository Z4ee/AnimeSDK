#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/BuffAttackPropertType.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

namespace MoleMole::Config { class BuffAttackProperty; }
namespace MoleMole::Config { class BuffVariantElementAttack; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0xF13AAF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityUnderlyingAnimEvents_TypeDefinitionIndex = 59061;

	class ConfigEntityUnderlyingAnimEvents : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* HitWallAttackProperty; // 0x58
		::System::String* ExhaustedAttackProperty; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAttackProperty*>* AttackProperties; // 0x68
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffAttackPropertType, ::MoleMole::Config::BuffAttackProperty*>*>* BuffAttackProperties; // 0x70
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffVariantElementAttack*>* ConfigBuffAttackProperties; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS__CTOR_OFFSET))(this);
		}
	};
}
