#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONSLOTCONFIG_METHOD_2_0103188E41323BB3_OFFSET UNITYSDK_OFFSET(0x1DCB35C0)
#define RPG_GAMECORE_FORMATIONSLOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB36F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationSlotConfig_TypeDefinitionIndex = 15446;

	class FormationSlotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single OffsetX; // 0x10
		::System::Single OffsetZ; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONSLOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0103188E41323BB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationSlotConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationSlotConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONSLOTCONFIG_METHOD_2_0103188E41323BB3_OFFSET))(a1, a2);
		}
	};
}
