#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class CelestialConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SOLARSYSTEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE0ADB50)

namespace RPG::Client
{
	inline static constexpr unsigned int SolarSystemConfig_TypeDefinitionIndex = 69756;

	class SolarSystemConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* solarName; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CelestialConfig*>* celestials; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOLARSYSTEMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
