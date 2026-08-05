#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class GraphRegistryInfo; }

#define MOLEMOLE_NEWAUTOGRAPHREGISTRYCONFIG_CLEARGRAPHBYTESREGISTRYPATHS_OFFSET UNITYSDK_OFFSET(0x18092E10)
#define MOLEMOLE_NEWAUTOGRAPHREGISTRYCONFIG_REBUILDGRAPHREGISTRYHASHPATHS_OFFSET UNITYSDK_OFFSET(0x180927D0)
#define MOLEMOLE_NEWAUTOGRAPHREGISTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18092E90)

namespace MoleMole
{
	inline static constexpr unsigned int NewAutoGraphRegistryConfig_TypeDefinitionIndex = 49128;

	class NewAutoGraphRegistryConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::GraphRegistryInfo*>* graphBytesRegistryPaths; // 0x58
		::Il2CppArray<::System::UInt64>* graphRegistryNameHashes; // 0x60
		::Il2CppArray<::Foundation::AssetPath>* graphRegistryHashPaths; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOGRAPHREGISTRYCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean RebuildGraphRegistryHashPaths()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOGRAPHREGISTRYCONFIG_REBUILDGRAPHREGISTRYHASHPATHS_OFFSET))(this);
		}

		::System::Void ClearGraphBytesRegistryPaths()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOGRAPHREGISTRYCONFIG_CLEARGRAPHBYTESREGISTRYPATHS_OFFSET))(this);
		}
	};
}
