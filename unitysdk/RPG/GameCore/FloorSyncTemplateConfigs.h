#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORSYNCTEMPLATECONFIGS_METHOD_2_81DD3101D40FD946_OFFSET UNITYSDK_OFFSET(0x17214EB0)
#define RPG_GAMECORE_FLOORSYNCTEMPLATECONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x17214EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorSyncTemplateConfigs_TypeDefinitionIndex = 15993;

	class FloorSyncTemplateConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSYNCTEMPLATECONFIGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_81DD3101D40FD946(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorSyncTemplateConfigs*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorSyncTemplateConfigs*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSYNCTEMPLATECONFIGS_METHOD_2_81DD3101D40FD946_OFFSET))(a1, a2);
		}
	};
}
