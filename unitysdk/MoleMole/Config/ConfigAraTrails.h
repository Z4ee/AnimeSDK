#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigAraTrail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGARATRAILS__CTOR_OFFSET UNITYSDK_OFFSET(0x114697D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAraTrails_TypeDefinitionIndex = 63828;

	class ConfigAraTrails : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAraTrail*>* AraTrails; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGARATRAILS__CTOR_OFFSET))(this);
		}
	};
}
