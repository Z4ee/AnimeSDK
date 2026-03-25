#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_9D45FD9508FBFDAC_OFFSET UNITYSDK_OFFSET(0x176941F0)
#define RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_FEE07A009578FB66_OFFSET UNITYSDK_OFFSET(0x176942C0)
#define RPG_GAMECORE_ST_BYINATTACKANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17694270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAttackAngle_TypeDefinitionIndex = 18352;

	class ST_ByInAttackAngle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKANGLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9D45FD9508FBFDAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackAngle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_9D45FD9508FBFDAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FEE07A009578FB66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackAngle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_FEE07A009578FB66_OFFSET))(a1, a2);
		}
	};
}
