#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MISSIONMAPPROPTYPE_METHOD_2_A4BE208EF3B5E9DD_OFFSET UNITYSDK_OFFSET(0x17422190)
#define RPG_GAMECORE_MISSIONMAPPROPTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x174222B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionMapPropType_TypeDefinitionIndex = 17424;

	class MissionMapPropType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 PropID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONMAPPROPTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A4BE208EF3B5E9DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionMapPropType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionMapPropType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONMAPPROPTYPE_METHOD_2_A4BE208EF3B5E9DD_OFFSET))(a1, a2);
		}
	};
}
