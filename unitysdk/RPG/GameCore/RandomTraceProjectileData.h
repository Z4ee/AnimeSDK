#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_METHOD_3_B1B872F7DE4CEE53_OFFSET UNITYSDK_OFFSET(0x19AB0340)
#define RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_METHOD_3_D474125E3DA5F900_OFFSET UNITYSDK_OFFSET(0x19AB02E0)
#define RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB0330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomTraceProjectileData_TypeDefinitionIndex = 14891;

	class RandomTraceProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::MVector3 TargetOffsetRange; // 0xB8
		::RPG::MVector3 StartOffsetRange; // 0xC4
		::System::Single MaxLifeTime; // 0xD0
		::System::Single TraceDelay; // 0xD4
		::System::Single ArriveDistance; // 0xD8
		::System::Single TurnSpeed; // 0xDC
		::RPG::MVector3 StartDirction; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D474125E3DA5F900(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomTraceProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomTraceProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_METHOD_3_D474125E3DA5F900_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1B872F7DE4CEE53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomTraceProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomTraceProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_METHOD_3_B1B872F7DE4CEE53_OFFSET))(a1, a2);
		}
	};
}
