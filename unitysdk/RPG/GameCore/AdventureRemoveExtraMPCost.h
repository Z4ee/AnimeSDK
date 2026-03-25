#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_METHOD_3_01F155941DF100C0_OFFSET UNITYSDK_OFFSET(0x16F59A20)
#define RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_METHOD_3_D31559213A1A737F_OFFSET UNITYSDK_OFFSET(0x16F599A0)
#define RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x16F599F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureRemoveExtraMPCost_TypeDefinitionIndex = 19973;

	class AdventureRemoveExtraMPCost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SkillIndex; // 0x18
		::System::UInt32 ExtraCost; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D31559213A1A737F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureRemoveExtraMPCost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureRemoveExtraMPCost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_METHOD_3_D31559213A1A737F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01F155941DF100C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureRemoveExtraMPCost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureRemoveExtraMPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_METHOD_3_01F155941DF100C0_OFFSET))(a1, a2);
		}
	};
}
