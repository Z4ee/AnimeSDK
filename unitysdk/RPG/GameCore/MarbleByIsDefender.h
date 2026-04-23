#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYISDEFENDER_METHOD_4_9B2626968487604F_OFFSET UNITYSDK_OFFSET(0x18A99990)
#define RPG_GAMECORE_MARBLEBYISDEFENDER_METHOD_4_E6C132454F74478F_OFFSET UNITYSDK_OFFSET(0x18A99A70)
#define RPG_GAMECORE_MARBLEBYISDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A99A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByIsDefender_TypeDefinitionIndex = 15967;

	class MarbleByIsDefender : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9B2626968487604F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISDEFENDER_METHOD_4_9B2626968487604F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E6C132454F74478F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISDEFENDER_METHOD_4_E6C132454F74478F_OFFSET))(a1, a2);
		}
	};
}
