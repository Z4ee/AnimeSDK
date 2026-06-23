#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class OverlayOutlineConfig; }
namespace MoleMole::Config { class OverlayOutlineConfigEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1619F8E0)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1619F6E0)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1619FB80)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1619FCE0)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1619FCF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OverlayOutlineCollectionConfig_TypeDefinitionIndex = 83301;

	class OverlayOutlineCollectionConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::OverlayOutlineConfig*>* Mappings; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::OverlayOutlineConfigEntry*>* _serializedData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECOLLECTIONCONFIG___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
