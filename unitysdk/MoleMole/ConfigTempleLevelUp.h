#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigTempleLevelUpSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTEMPLELEVELUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B501A80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTempleLevelUp_TypeDefinitionIndex = 74168;

	class ConfigTempleLevelUp : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* ParticlePosition; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigTempleLevelUpSetting*>* LevelUpConfigs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP__CTOR_OFFSET))(this);
		}
	};
}
