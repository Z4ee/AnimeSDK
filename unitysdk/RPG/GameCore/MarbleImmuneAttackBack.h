#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_METHOD_3_82C3A20302CAF206_OFFSET UNITYSDK_OFFSET(0x1738FDB0)
#define RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_METHOD_3_FE3B6A08AA2CF94D_OFFSET UNITYSDK_OFFSET(0x1738FE90)
#define RPG_GAMECORE_MARBLEIMMUNEATTACKBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1738FE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleImmuneAttackBack_TypeDefinitionIndex = 15442;

	class MarbleImmuneAttackBack : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEIMMUNEATTACKBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82C3A20302CAF206(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleImmuneAttackBack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleImmuneAttackBack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_METHOD_3_82C3A20302CAF206_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE3B6A08AA2CF94D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleImmuneAttackBack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleImmuneAttackBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_METHOD_3_FE3B6A08AA2CF94D_OFFSET))(a1, a2);
		}
	};
}
