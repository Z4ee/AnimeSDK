#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_MobileButtonPositionInfo.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelPositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobileButtonScene; }
namespace MoleMole { class ConfigUICommon_Input_ConfigMobilePanelLayout; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETALLBUTTONTYPES_OFFSET UNITYSDK_OFFSET(0x14264FF0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETALLPANELTYPES_OFFSET UNITYSDK_OFFSET(0x14264980)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETDEFAULTPANELTYPE_1_OFFSET UNITYSDK_OFFSET(0x14263DA0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETDEFAULTPANELTYPE_OFFSET UNITYSDK_OFFSET(0x14263B10)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETMOBILEPANELLAYOUT_OFFSET UNITYSDK_OFFSET(0x14264440)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0x142632F0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x142655E0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x14265500)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_TypeDefinitionIndex = 52100;

	class ConfigUICommon_Input : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::ConfigUICommon_Input_PanelType>** StaticGet__panelTypesCache()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::ConfigUICommon_Input_PanelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Input_TypeDefinitionIndex)->GetStaticField(0x459C0);
		}
		static ::System::Collections::Generic::List_1<::MoleMole::ConfigUICommon_Input_ButtonType>** StaticGet__buttonTypesCache()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::ConfigUICommon_Input_ButtonType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Input_TypeDefinitionIndex)->GetStaticField(0x459C8);
		}
		::System::Collections::Generic::Dictionary_2<::MoleMole::ConfigUICommon_Input_SceneType, ::MoleMole::ConfigUICommon_Input_ConfigMobileButtonScene*>* ConfigMobileButtonScenes; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT__CCTOR_OFFSET))();
		}

		::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo GetPositionInfo(::MoleMole::ConfigUICommon_Input_ButtonType buttonType)
		{
			return ((::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETPOSITIONINFO_OFFSET))(this, buttonType);
		}

		::MoleMole::ConfigUICommon_Input_PanelType GetDefaultPanelType(::MoleMole::ConfigUICommon_Input_SceneType sceneType, ::MoleMole::ConfigUICommon_Input_PanelPositionType panelPositionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_PanelType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType, ::MoleMole::ConfigUICommon_Input_PanelPositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETDEFAULTPANELTYPE_OFFSET))(this, sceneType, panelPositionType);
		}

		::MoleMole::ConfigUICommon_Input_PanelType GetDefaultPanelType_1(::MoleMole::ConfigUICommon_Input_SceneType sceneType, ::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_PanelType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETDEFAULTPANELTYPE_1_OFFSET))(this, sceneType, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* GetMobilePanelLayout(::MoleMole::ConfigUICommon_Input_PanelType panelType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETMOBILEPANELLAYOUT_OFFSET))(this, panelType);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::ConfigUICommon_Input_PanelType>* GetAllPanelTypes(::MoleMole::ConfigUICommon_Input_SceneType sceneType)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::ConfigUICommon_Input_PanelType>*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETALLPANELTYPES_OFFSET))(this, sceneType);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::ConfigUICommon_Input_ButtonType>* GetAllButtonTypes(::MoleMole::ConfigUICommon_Input_PanelType panelType)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::ConfigUICommon_Input_ButtonType>*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETALLBUTTONTYPES_OFFSET))(this, panelType);
		}
	};
}
