#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntitySplitToningEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA501B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySplitToningEffects_TypeDefinitionIndex = 54636;

	class ConfigEntitySplitToningEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
