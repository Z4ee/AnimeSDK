#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUMMONENTITYPRELOADCONFIG_METHOD_2_8E60481D74A36AD8_OFFSET UNITYSDK_OFFSET(0x19CD25A0)
#define RPG_GAMECORE_SUMMONENTITYPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD26A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonEntityPreloadConfig_TypeDefinitionIndex = 15529;

	class SummonEntityPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EntityType EntityType; // 0x10
		::System::UInt32 ConfigID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONENTITYPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8E60481D74A36AD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonEntityPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonEntityPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONENTITYPRELOADCONFIG_METHOD_2_8E60481D74A36AD8_OFFSET))(a1, a2);
		}
	};
}
