#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYISDEFENDER_METHOD_4_230D4E11423C640D_OFFSET UNITYSDK_OFFSET(0x198CCBE0)
#define RPG_GAMECORE_MARBLEBYISDEFENDER_METHOD_4_9D2FE9E74A746C55_OFFSET UNITYSDK_OFFSET(0x198CCB00)
#define RPG_GAMECORE_MARBLEBYISDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x198CCB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByIsDefender_TypeDefinitionIndex = 16019;

	class MarbleByIsDefender : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9D2FE9E74A746C55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISDEFENDER_METHOD_4_9D2FE9E74A746C55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_230D4E11423C640D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISDEFENDER_METHOD_4_230D4E11423C640D_OFFSET))(a1, a2);
		}
	};
}
