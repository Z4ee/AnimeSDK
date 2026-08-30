#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIGS_METHOD_2_762C9646973179A3_OFFSET UNITYSDK_OFFSET(0x1D10D540)
#define RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10D580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorGroupSyncTemplateConfigs_TypeDefinitionIndex = 17203;

	class FloorGroupSyncTemplateConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_762C9646973179A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorGroupSyncTemplateConfigs*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorGroupSyncTemplateConfigs*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIGS_METHOD_2_762C9646973179A3_OFFSET))(a1, a2);
		}
	};
}
