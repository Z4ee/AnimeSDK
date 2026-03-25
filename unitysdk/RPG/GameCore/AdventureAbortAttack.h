#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREABORTATTACK_METHOD_3_366090A8E0064C3D_OFFSET UNITYSDK_OFFSET(0x16F4A3A0)
#define RPG_GAMECORE_ADVENTUREABORTATTACK_METHOD_3_4D2618B5C2E58F71_OFFSET UNITYSDK_OFFSET(0x16F4A4B0)
#define RPG_GAMECORE_ADVENTUREABORTATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4A480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbortAttack_TypeDefinitionIndex = 18482;

	class AdventureAbortAttack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABORTATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_366090A8E0064C3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAbortAttack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAbortAttack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABORTATTACK_METHOD_3_366090A8E0064C3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D2618B5C2E58F71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAbortAttack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAbortAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABORTATTACK_METHOD_3_4D2618B5C2E58F71_OFFSET))(a1, a2);
		}
	};
}
