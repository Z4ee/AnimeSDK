#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_50F96F0ED040E34C_OFFSET UNITYSDK_OFFSET(0x18757630)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_E8E65D981FABC70E_OFFSET UNITYSDK_OFFSET(0x18757560)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x187575E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsShowInActionBar_TypeDefinitionIndex = 23381;

	class ByIsShowInActionBar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E8E65D981FABC70E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsShowInActionBar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsShowInActionBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_E8E65D981FABC70E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_50F96F0ED040E34C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_50F96F0ED040E34C_OFFSET))(a1, a2);
		}
	};
}
