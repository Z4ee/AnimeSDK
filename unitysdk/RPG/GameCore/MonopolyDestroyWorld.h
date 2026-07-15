#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYDESTROYWORLD_METHOD_3_1B35D7A7DAF5F96D_OFFSET UNITYSDK_OFFSET(0x1B1B1110)
#define RPG_GAMECORE_MONOPOLYDESTROYWORLD_METHOD_3_3E92E766875B9030_OFFSET UNITYSDK_OFFSET(0x1B1B11E0)
#define RPG_GAMECORE_MONOPOLYDESTROYWORLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B11D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyDestroyWorld_TypeDefinitionIndex = 20145;

	class MonopolyDestroyWorld : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDESTROYWORLD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B35D7A7DAF5F96D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyDestroyWorld*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyDestroyWorld*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDESTROYWORLD_METHOD_3_1B35D7A7DAF5F96D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E92E766875B9030(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyDestroyWorld* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyDestroyWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDESTROYWORLD_METHOD_3_3E92E766875B9030_OFFSET))(a1, a2);
		}
	};
}
