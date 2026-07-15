#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREEXTRAMPCOST_METHOD_3_4DF6BFC4AC8D6CC1_OFFSET UNITYSDK_OFFSET(0x1AE5C970)
#define RPG_GAMECORE_ADVENTUREEXTRAMPCOST_METHOD_3_6A7B67DEE3A1C974_OFFSET UNITYSDK_OFFSET(0x1AE5C9B0)
#define RPG_GAMECORE_ADVENTUREEXTRAMPCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5C9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureExtraMPCost_TypeDefinitionIndex = 21000;

	class AdventureExtraMPCost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SkillIndex; // 0x18
		::System::UInt32 ExtraCost; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREEXTRAMPCOST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DF6BFC4AC8D6CC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureExtraMPCost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureExtraMPCost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREEXTRAMPCOST_METHOD_3_4DF6BFC4AC8D6CC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6A7B67DEE3A1C974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureExtraMPCost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureExtraMPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREEXTRAMPCOST_METHOD_3_6A7B67DEE3A1C974_OFFSET))(a1, a2);
		}
	};
}
