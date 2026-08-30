#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_METHOD_4_B833CF2642909536_OFFSET UNITYSDK_OFFSET(0x1C2FEF00)
#define RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_METHOD_4_F1CECD2975A7DB92_OFFSET UNITYSDK_OFFSET(0x1C2FEF50)
#define RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FEF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckLineupHeroAvatarID_TypeDefinitionIndex = 20556;

	class ByCheckLineupHeroAvatarID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B833CF2642909536(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLineupHeroAvatarID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLineupHeroAvatarID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_METHOD_4_B833CF2642909536_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1CECD2975A7DB92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLineupHeroAvatarID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLineupHeroAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_METHOD_4_F1CECD2975A7DB92_OFFSET))(a1, a2);
		}
	};
}
