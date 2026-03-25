#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelAnchorParameter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_METHOD_3_9D3AEEDA46093791_OFFSET UNITYSDK_OFFSET(0x1732DD50)
#define RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_METHOD_3_EC74D83CD95DBCB2_OFFSET UNITYSDK_OFFSET(0x1732DD90)
#define RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1732DD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAnchorCoin40Parameter_TypeDefinitionIndex = 15838;

	class LevelAnchorCoin40Parameter : public ::RPG::GameCore::LevelAnchorParameter
	{
	public:
		::System::UInt32 BatchID; // 0x10
		::System::UInt32 SpawnIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D3AEEDA46093791(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAnchorCoin40Parameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAnchorCoin40Parameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_METHOD_3_9D3AEEDA46093791_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC74D83CD95DBCB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAnchorCoin40Parameter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAnchorCoin40Parameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_METHOD_3_EC74D83CD95DBCB2_OFFSET))(a1, a2);
		}
	};
}
