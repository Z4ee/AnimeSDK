#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSCENESOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x14874E00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSceneSound_TypeDefinitionIndex = 70705;

	class ConfigSceneSound : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* sceneSoundPrefabDict; // 0x58
		::System::Single switchSceneDelay; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSCENESOUND__CTOR_OFFSET))(this);
		}
	};
}
