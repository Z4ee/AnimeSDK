#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_301990978E85906C_OFFSET UNITYSDK_OFFSET(0x18DEE4E0)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_CE9321DFFBDC3826_OFFSET UNITYSDK_OFFSET(0x18DEE5B0)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEE560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAttackDistance_TypeDefinitionIndex = 18998;

	class ST_ByInAttackDistance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_301990978E85906C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_301990978E85906C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE9321DFFBDC3826(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_CE9321DFFBDC3826_OFFSET))(a1, a2);
		}
	};
}
