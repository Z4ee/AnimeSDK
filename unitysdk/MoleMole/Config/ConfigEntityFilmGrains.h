#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace MoleMole::Config { class ConfigEntityFilmGrain; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAINS__CTOR_OFFSET UNITYSDK_OFFSET(0x1625BEB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFilmGrains_TypeDefinitionIndex = 46309;

	class ConfigEntityFilmGrains : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Rendering::Universal::FilmGrainLookup DefaultType; // 0x58
		::System::Single DefaultIntensity; // 0x5C
		::System::Single DefaultResponse; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>* Configs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAINS__CTOR_OFFSET))(this);
		}
	};
}
