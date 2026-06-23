#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityCullingEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x19299D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCullingEffects_TypeDefinitionIndex = 42908;

	class ConfigEntityCullingEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
