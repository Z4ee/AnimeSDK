#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class OverlayOutlineConfig_AnimParams; }
namespace MoleMole::Config { class OverlayOutlineConfig_AnimParamsEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_GET_ANIMPARAMSDICT_OFFSET UNITYSDK_OFFSET(0x18ADCC10)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x18ADCF30)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_SETANIMPARAMSDIRTY_OFFSET UNITYSDK_OFFSET(0x18ADCEE0)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADCF80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OverlayOutlineConfig_TypeDefinitionIndex = 73113;

	class OverlayOutlineConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* OverlayMaterialPath; // 0x58
		::System::Boolean OccludedByDepth; // 0x60
		::System::Boolean OutlinePerObject; // 0x61
		::System::Boolean OccludedByDepthPerObject; // 0x62
		::System::Boolean OccludedByCharacters; // 0x63
		::System::Boolean UseLODGroup; // 0x64
		::System::Single OutlineColorIntensity; // 0x68
		::System::Single OutlineThickness; // 0x6C
		::System::Boolean DrawOverlayBeforeOpaquePostProcess; // 0x70
		::System::Boolean EnableFade; // 0x71
		::System::Single FadeTime; // 0x74
		::System::Collections::Generic::List_1<::MoleMole::Config::OverlayOutlineConfig_AnimParamsEntry*>* AnimParamsList; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::OverlayOutlineConfig_AnimParams*>* _animParamsDictCache; // 0x80
		::System::Boolean _animParamsDictDirty; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::OverlayOutlineConfig_AnimParams*>* get_AnimParamsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::OverlayOutlineConfig_AnimParams*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_GET_ANIMPARAMSDICT_OFFSET))(this);
		}

		::System::Void SetAnimParamsDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_SETANIMPARAMSDIRTY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_ONVALIDATE_OFFSET))(this);
		}
	};
}
