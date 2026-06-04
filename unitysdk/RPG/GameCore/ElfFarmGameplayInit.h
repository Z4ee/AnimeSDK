#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFFARMGAMEPLAYINIT_METHOD_3_303C7927CFAD6B6C_OFFSET UNITYSDK_OFFSET(0x196DA7F0)
#define RPG_GAMECORE_ELFFARMGAMEPLAYINIT_METHOD_3_D53C0252AE924560_OFFSET UNITYSDK_OFFSET(0x196DA6E0)
#define RPG_GAMECORE_ELFFARMGAMEPLAYINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x196DA7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfFarmGameplayInit_TypeDefinitionIndex = 19919;

	class ElfFarmGameplayInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMGAMEPLAYINIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D53C0252AE924560(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfFarmGameplayInit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfFarmGameplayInit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMGAMEPLAYINIT_METHOD_3_D53C0252AE924560_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_303C7927CFAD6B6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfFarmGameplayInit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfFarmGameplayInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMGAMEPLAYINIT_METHOD_3_303C7927CFAD6B6C_OFFSET))(a1, a2);
		}
	};
}
