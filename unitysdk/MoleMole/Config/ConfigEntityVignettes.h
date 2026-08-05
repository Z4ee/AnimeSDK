#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityVignette; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTES__CTOR_OFFSET UNITYSDK_OFFSET(0x12F00330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityVignettes_TypeDefinitionIndex = 82670;

	class ConfigEntityVignettes : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Color DefaultColor; // 0x58
		::UnityEngine::Vector2 DefaultCenter; // 0x68
		::System::Single DefaultIntensity; // 0x70
		::System::Single DefaultSmoothness; // 0x74
		::System::Boolean DefaultRounded; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>* Vignettes; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTES__CTOR_OFFSET))(this);
		}
	};
}
