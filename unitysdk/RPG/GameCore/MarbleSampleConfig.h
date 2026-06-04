#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESAMPLECONFIG_METHOD_2_77F17FFE0D8A7BEB_OFFSET UNITYSDK_OFFSET(0x198D8200)
#define RPG_GAMECORE_MARBLESAMPLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198D8440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSampleConfig_TypeDefinitionIndex = 16049;

	class MarbleSampleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Int32 EnemySampleCount; // 0x14
		::System::Int32 AllySampleCount; // 0x18
		::System::Boolean IsAverageAngle; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESAMPLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_77F17FFE0D8A7BEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSampleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSampleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESAMPLECONFIG_METHOD_2_77F17FFE0D8A7BEB_OFFSET))(a1, a2);
		}
	};
}
