#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERALEVELSTATUS_METHOD_2_BD899551DE98FB1F_OFFSET UNITYSDK_OFFSET(0x170A9800)
#define RPG_GAMECORE_CHIMERALEVELSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x170A99B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraLevelStatus_TypeDefinitionIndex = 14541;

	class ChimeraLevelStatus : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Attack; // 0x10
		::RPG::GameCore::FixPoint HP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERALEVELSTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BD899551DE98FB1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraLevelStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraLevelStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERALEVELSTATUS_METHOD_2_BD899551DE98FB1F_OFFSET))(a1, a2);
		}
	};
}
