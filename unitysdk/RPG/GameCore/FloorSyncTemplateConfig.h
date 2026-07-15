#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORSYNCTEMPLATECONFIG_METHOD_2_DCEAD06FA1C5B149_OFFSET UNITYSDK_OFFSET(0x1BEBD1E0)
#define RPG_GAMECORE_FLOORSYNCTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBD220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorSyncTemplateConfig_TypeDefinitionIndex = 16714;

	class FloorSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSYNCTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DCEAD06FA1C5B149(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorSyncTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorSyncTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSYNCTEMPLATECONFIG_METHOD_2_DCEAD06FA1C5B149_OFFSET))(a1, a2);
		}
	};
}
