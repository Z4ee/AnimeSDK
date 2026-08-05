#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_PRELOADGHOSTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1DDB0)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadGhostEffectConfig_TypeDefinitionIndex = 80263;

	class PreloadGhostEffectConfig : public ::System::Object
	{
	public:
		::System::Int32 groupId; // 0x10
		::System::Int32 ghostPrefabId; // 0x14
		::System::Int32 ghostMaxCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADGHOSTEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
