#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigRotation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGLOGICROTATIONREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1744D7A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLogicRotationRegistry_TypeDefinitionIndex = 47485;

	class ConfigLogicRotationRegistry : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigRotation*>* entries; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGICROTATIONREGISTRY__CTOR_OFFSET))(this);
		}
	};
}
