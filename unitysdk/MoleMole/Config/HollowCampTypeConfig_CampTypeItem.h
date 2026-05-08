#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowEntityConfig_TeamRelationship.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG_CAMPTYPEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x123192E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCampTypeConfig_CampTypeItem_TypeDefinitionIndex = 64369;

	class HollowCampTypeConfig_CampTypeItem : public ::System::Object
	{
	public:
		::MoleMole::HollowEntityConfig_TeamRelationship relationship; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG_CAMPTYPEITEM__CTOR_OFFSET))(this);
		}
	};
}
