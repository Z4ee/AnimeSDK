#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::SECTR { class SECTR_LayerConfig; }
namespace MoleMole::SECTR { class SECTR_SectorThresholdConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_ADDNEWLAYER_OFFSET UNITYSDK_OFFSET(0x130436A0)
#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_ADDNEWTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x13043800)
#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_COMPARELAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x13043640)
#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_GETALLCONFIGS_OFFSET UNITYSDK_OFFSET(0x13043540)
#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_GETTHRESHOLDBYNAME_OFFSET UNITYSDK_OFFSET(0x13043950)
#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x13043160)
#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_REMOVELAYER_OFFSET UNITYSDK_OFFSET(0x13043770)
#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_REMOVETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x130438C0)
#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_SORTCONFIGS_OFFSET UNITYSDK_OFFSET(0x13043430)
#define MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13043A40)

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SECTR_SceneSplitterConfig_TypeDefinitionIndex = 80933;

	class SECTR_SceneSplitterConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* folderName; // 0x58
		::System::String* finalSectorName; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::SECTR::SECTR_LayerConfig*>* layerConfigs; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::SECTR::SECTR_SectorThresholdConfig*>* thresholdConfigs; // 0x70
		::System::Single defaultHlodDis; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SECTR::SECTR_SectorThresholdConfig*>* _thresholdConfigs; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::SECTR::SECTR_LayerConfig*>* SortConfigs()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::SECTR::SECTR_LayerConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_SORTCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::SECTR::SECTR_LayerConfig*>* GetAllConfigs()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::SECTR::SECTR_LayerConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_GETALLCONFIGS_OFFSET))(this);
		}

		static ::System::Int32 CompareLayerConfig(::MoleMole::SECTR::SECTR_LayerConfig* x, ::MoleMole::SECTR::SECTR_LayerConfig* y)
		{
			return ((::System::Int32(*)(::MoleMole::SECTR::SECTR_LayerConfig*, ::MoleMole::SECTR::SECTR_LayerConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_COMPARELAYERCONFIG_OFFSET))(x, y);
		}

		::System::Void AddNewLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_ADDNEWLAYER_OFFSET))(this);
		}

		::System::Void RemoveLayer(::MoleMole::SECTR::SECTR_LayerConfig* layer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SECTR::SECTR_LayerConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_REMOVELAYER_OFFSET))(this, layer);
		}

		::System::Void AddNewThreshold()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_ADDNEWTHRESHOLD_OFFSET))(this);
		}

		::System::Void RemoveThreshold(::MoleMole::SECTR::SECTR_SectorThresholdConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SECTR::SECTR_SectorThresholdConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_REMOVETHRESHOLD_OFFSET))(this, config);
		}

		::MoleMole::SECTR::SECTR_SectorThresholdConfig* GetThresholdByName(::System::String* name)
		{
			return ((::MoleMole::SECTR::SECTR_SectorThresholdConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SCENESPLITTERCONFIG_GETTHRESHOLDBYNAME_OFFSET))(this, name);
		}
	};
}
