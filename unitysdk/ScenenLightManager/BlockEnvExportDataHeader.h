#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace ScenenLightManager { class LightControlDataPair; }
namespace ScenenLightManager { class LightSetExportData; }
namespace ScenenLightManager { class LightSetExportDataLong; }
namespace ScenenLightManager { class LightSetQualityExportData; }
namespace ScenenLightManager { class LoadBlockData; }
namespace ScenenLightManager { class Tup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_BLOCKENVEXPORTDATAHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0xB936600)

namespace ScenenLightManager
{
	inline static constexpr unsigned int BlockEnvExportDataHeader_TypeDefinitionIndex = 45643;

	class BlockEnvExportDataHeader : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* levelName; // 0x18
		::System::Int64 version; // 0x20
		::System::Collections::Generic::List_1<::ScenenLightManager::LoadBlockData*>* loadBlockDatas; // 0x28
		::System::Collections::Generic::List_1<::ScenenLightManager::LightSetExportData*>* blockLightSets; // 0x30
		::System::Collections::Generic::List_1<::ScenenLightManager::LoadBlockData*>* logicBlockIDToBlockName; // 0x38
		::System::Collections::Generic::List_1<::ScenenLightManager::LightSetExportDataLong*>* blockLightInstanceIDSets; // 0x40
		::System::Collections::Generic::List_1<::ScenenLightManager::LightSetExportData*>* envLightSets; // 0x48
		::System::Collections::Generic::List_1<::ScenenLightManager::LightSetExportData*>* blockCharacterLightSets; // 0x50
		::System::Collections::Generic::List_1<::ScenenLightManager::LightSetExportData*>* blockShadowLightSets; // 0x58
		::System::Collections::Generic::List_1<::ScenenLightManager::LightSetQualityExportData*>* settingLightSets; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* holdBlocks; // 0x68
		::System::Collections::Generic::List_1<::ScenenLightManager::Tup*>* instanceIdToLights; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* allLights; // 0x78
		::System::Collections::Generic::List_1<::ScenenLightManager::LightControlDataPair*>* allControlDataPairs; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* subHeaders; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BLOCKENVEXPORTDATAHEADER__CTOR_OFFSET))(this);
		}
	};
}
