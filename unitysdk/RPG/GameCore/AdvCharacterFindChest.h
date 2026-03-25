#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVCHARACTERFINDCHEST_METHOD_3_CA2B871BC6C32E74_OFFSET UNITYSDK_OFFSET(0x16F28840)
#define RPG_GAMECORE_ADVCHARACTERFINDCHEST_METHOD_3_F02143645F5B9BF5_OFFSET UNITYSDK_OFFSET(0x16F287C0)
#define RPG_GAMECORE_ADVCHARACTERFINDCHEST__CTOR_OFFSET UNITYSDK_OFFSET(0x16F28810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterFindChest_TypeDefinitionIndex = 18523;

	class AdvCharacterFindChest : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FindChestFuncID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERFINDCHEST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F02143645F5B9BF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterFindChest*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterFindChest*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERFINDCHEST_METHOD_3_F02143645F5B9BF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA2B871BC6C32E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterFindChest* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterFindChest*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERFINDCHEST_METHOD_3_CA2B871BC6C32E74_OFFSET))(a1, a2);
		}
	};
}
