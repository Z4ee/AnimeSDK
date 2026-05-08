#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/MoleMole/Config/LocalAvatarElevationRatioDitheringData.h"
#include "unitysdk/MoleMole/Config/SceneObjDitherData.h"

namespace MoleMole::Config { class CommonDitherConfigs_KeyValueInfo_CamDitherLayer; }
namespace MoleMole::Config { class CommonDitherConfigs_KeyValueInfo_CharCamera; }
namespace MoleMole::Config { class CommonDitherConfigs_KeyValueInfo_CharFade; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xED0F1B0)
#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xED0EAE0)
#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0xED0FA10)
#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xED0FD10)
#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xED0FD20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CommonDitherConfigs_TypeDefinitionIndex = 81279;

	class CommonDitherConfigs : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterFadeDitheringDataV2>* CharacterFadeDitherDatasV2; // 0x58
		::MoleMole::Config::LocalAvatarElevationRatioDitheringData LocalAvatarElevRatioDitheringInfo; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CharacterCameraDitheringData>* CharacterCameraDitheringDatas; // 0x88
		::MoleMole::Config::SceneObjDitherData sceneObjDitherData; // 0x90
		::System::Single SpecialNPCDitherDitherDis; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CameraDitherLayerData>* CameraDitherLayerDataDict; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::Config::CommonDitherConfigs_KeyValueInfo_CharFade*>* KeyValueInfoList; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::Config::CommonDitherConfigs_KeyValueInfo_CharCamera*>* KeyValueInfoList1; // 0xC0
		::System::Collections::Generic::List_1<::MoleMole::Config::CommonDitherConfigs_KeyValueInfo_CamDitherLayer*>* KeyValueInfoList2; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
