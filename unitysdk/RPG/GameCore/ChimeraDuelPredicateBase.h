#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELPREDICATEBASE_METHOD_2_7EF2F4FF5908A4B0_OFFSET UNITYSDK_OFFSET(0x18801A40)
#define RPG_GAMECORE_CHIMERADUELPREDICATEBASE_METHOD_2_A2536585F11B097F_OFFSET UNITYSDK_OFFSET(0x18801710)
#define RPG_GAMECORE_CHIMERADUELPREDICATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18801AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPredicateBase_TypeDefinitionIndex = 15138;

	class ChimeraDuelPredicateBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPREDICATEBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A2536585F11B097F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelPredicateBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPredicateBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPREDICATEBASE_METHOD_2_A2536585F11B097F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_7EF2F4FF5908A4B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelPredicateBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPredicateBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPREDICATEBASE_METHOD_2_7EF2F4FF5908A4B0_OFFSET))(a1, a2);
		}
	};
}
