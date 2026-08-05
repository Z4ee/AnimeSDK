#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A734210DD9FF658C.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UITOKENSHOWCONFIG_GET_CUSTOMITEMPACKAGETYPE_OFFSET UNITYSDK_OFFSET(0x10EF73B0)
#define MOLEMOLE_UITOKENSHOWCONFIG_GET_USECUSTOMITEMPACKAGETYPE_OFFSET UNITYSDK_OFFSET(0x10EF7360)
#define MOLEMOLE_UITOKENSHOWCONFIG_METHOD_1_AEC5F34E88355378_OFFSET UNITYSDK_OFFSET(0x10EF73E0)
#define MOLEMOLE_UITOKENSHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF73C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITokenShowConfig_TypeDefinitionIndex = 54197;

	class UITokenShowConfig : public ::System::Object
	{
	public:
		::System::Int32 TokenItemID; // 0x10
		::System::Boolean HideAddIcon; // 0x14
		::System::Boolean EnableClickInLevel; // 0x15
		::Enum_3_A734210DD9FF658C m_customItemPackageType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENSHOWCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseCustomItemPackageType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENSHOWCONFIG_GET_USECUSTOMITEMPACKAGETYPE_OFFSET))(this);
		}

		::Enum_3_A734210DD9FF658C get_CustomItemPackageType()
		{
			return ((::Enum_3_A734210DD9FF658C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENSHOWCONFIG_GET_CUSTOMITEMPACKAGETYPE_OFFSET))(this);
		}

		::MoleMole::UITokenShowConfig* Method_1_AEC5F34E88355378(::Enum_3_A734210DD9FF658C a1)
		{
			return ((::MoleMole::UITokenShowConfig*(*)(::PVOID, ::Enum_3_A734210DD9FF658C))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENSHOWCONFIG_METHOD_1_AEC5F34E88355378_OFFSET))(this, a1);
		}
	};
}
