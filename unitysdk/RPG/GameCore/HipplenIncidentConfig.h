#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenIncidentStepConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTCONFIG_METHOD_2_EC461ADA8408094B_OFFSET UNITYSDK_OFFSET(0x1D202DD0)
#define RPG_GAMECORE_HIPPLENINCIDENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D202E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentConfig_TypeDefinitionIndex = 16624;

	class HipplenIncidentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenIncidentStepConfig* OnStart; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EC461ADA8408094B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCONFIG_METHOD_2_EC461ADA8408094B_OFFSET))(a1, a2);
		}
	};
}
