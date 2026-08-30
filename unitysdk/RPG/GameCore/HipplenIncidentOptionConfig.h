#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENINCIDENTOPTIONCONFIG_METHOD_2_A013EE34B62CF2D5_OFFSET UNITYSDK_OFFSET(0x1D191CD0)
#define RPG_GAMECORE_HIPPLENINCIDENTOPTIONCONFIG_METHOD_2_B9D536A79D8CFEAD_OFFSET UNITYSDK_OFFSET(0x1D191FB0)
#define RPG_GAMECORE_HIPPLENINCIDENTOPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D191790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentOptionConfig_TypeDefinitionIndex = 16633;

	class HipplenIncidentOptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DialogID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTOPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A013EE34B62CF2D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentOptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentOptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTOPTIONCONFIG_METHOD_2_A013EE34B62CF2D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B9D536A79D8CFEAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentOptionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTOPTIONCONFIG_METHOD_2_B9D536A79D8CFEAD_OFFSET))(a1, a2);
		}
	};
}
