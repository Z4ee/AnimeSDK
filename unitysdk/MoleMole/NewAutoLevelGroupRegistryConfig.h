#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_NEWAUTOLEVELGROUPREGISTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1739D100)

namespace MoleMole
{
	inline static constexpr unsigned int NewAutoLevelGroupRegistryConfig_TypeDefinitionIndex = 52784;

	class NewAutoLevelGroupRegistryConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::Foundation::AssetPath>* LevelGroupConfigRegistryPaths; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOLEVELGROUPREGISTRYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
