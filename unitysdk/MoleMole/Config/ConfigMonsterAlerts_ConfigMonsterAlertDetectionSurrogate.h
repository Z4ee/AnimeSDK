#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E21DA91F1EC19317_Enum_3_3DC591911FF43A91_1.h"
#include "unitysdk/System/Object.h"

class Class_1_E21DA91F1EC19317;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE_TOCONFIG_OFFSET UNITYSDK_OFFSET(0x1B54F110)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B54EF40)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54EEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_ConfigMonsterAlertDetectionSurrogate_TypeDefinitionIndex = 89844;

	class ConfigMonsterAlerts_ConfigMonsterAlertDetectionSurrogate : public ::System::Object
	{
	public:
		::System::Single AlertGrowSpeed; // 0x10
		::System::Single Angle; // 0x14
		::System::Single AngleOffset; // 0x18
		::System::Single Heigt; // 0x1C
		::System::Single HeigtOffset; // 0x20
		::System::Single Radius; // 0x24
		::System::String* BasedAttachPoint; // 0x28
		::Class_1_E21DA91F1EC19317_Enum_3_3DC591911FF43A91_1 TagFilterType; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* ZoneTags; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_E21DA91F1EC19317* src)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E21DA91F1EC19317*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE__CTOR_1_OFFSET))(this, src);
		}

		::Class_1_E21DA91F1EC19317* ToConfig()
		{
			return ((::Class_1_E21DA91F1EC19317*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE_TOCONFIG_OFFSET))(this);
		}
	};
}
