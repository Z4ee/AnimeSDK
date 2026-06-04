#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_JSONCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x19867A90)
#define RPG_GAMECORE_JSONCONFIG_RETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x19867AA0)
#define RPG_GAMECORE_JSONCONFIG_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x19867AE0)
#define RPG_GAMECORE_JSONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198557D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonConfig_TypeDefinitionIndex = 10463;

	class JsonConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONCONFIG_CLEAR_OFFSET))(this);
		}

		::System::Void ReturnToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONCONFIG_RETURNTOPOOL_OFFSET))(this);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONCONFIG_SHAREBYCOPY_OFFSET))(this);
		}
	};
}
