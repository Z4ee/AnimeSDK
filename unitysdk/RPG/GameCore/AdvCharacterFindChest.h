#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVCHARACTERFINDCHEST_METHOD_3_78B9A389176C2CA7_OFFSET UNITYSDK_OFFSET(0x1BE17120)
#define RPG_GAMECORE_ADVCHARACTERFINDCHEST_METHOD_3_CA2B871BC6C32E74_OFFSET UNITYSDK_OFFSET(0x1BE17160)
#define RPG_GAMECORE_ADVCHARACTERFINDCHEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE17150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterFindChest_TypeDefinitionIndex = 19458;

	class AdvCharacterFindChest : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FindChestFuncID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERFINDCHEST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78B9A389176C2CA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterFindChest*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterFindChest*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERFINDCHEST_METHOD_3_78B9A389176C2CA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA2B871BC6C32E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterFindChest* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterFindChest*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERFINDCHEST_METHOD_3_CA2B871BC6C32E74_OFFSET))(a1, a2);
		}
	};
}
