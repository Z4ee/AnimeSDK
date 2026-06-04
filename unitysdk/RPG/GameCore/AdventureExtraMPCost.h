#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREEXTRAMPCOST_METHOD_3_37075FB98627E0DB_OFFSET UNITYSDK_OFFSET(0x1944E030)
#define RPG_GAMECORE_ADVENTUREEXTRAMPCOST_METHOD_3_6A7B67DEE3A1C974_OFFSET UNITYSDK_OFFSET(0x1944E0B0)
#define RPG_GAMECORE_ADVENTUREEXTRAMPCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1944E080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureExtraMPCost_TypeDefinitionIndex = 20585;

	class AdventureExtraMPCost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SkillIndex; // 0x18
		::System::UInt32 ExtraCost; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREEXTRAMPCOST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_37075FB98627E0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureExtraMPCost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureExtraMPCost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREEXTRAMPCOST_METHOD_3_37075FB98627E0DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6A7B67DEE3A1C974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureExtraMPCost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureExtraMPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREEXTRAMPCOST_METHOD_3_6A7B67DEE3A1C974_OFFSET))(a1, a2);
		}
	};
}
