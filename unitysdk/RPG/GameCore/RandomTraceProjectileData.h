#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_METHOD_3_B1B872F7DE4CEE53_OFFSET UNITYSDK_OFFSET(0x18C8B560)
#define RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_METHOD_3_D474125E3DA5F900_OFFSET UNITYSDK_OFFSET(0x18C8B500)
#define RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8B550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomTraceProjectileData_TypeDefinitionIndex = 14827;

	class RandomTraceProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::MVector3 TargetOffsetRange; // 0xB0
		::RPG::MVector3 StartOffsetRange; // 0xBC
		::System::Single MaxLifeTime; // 0xC8
		::System::Single TraceDelay; // 0xCC
		::System::Single ArriveDistance; // 0xD0
		::System::Single TurnSpeed; // 0xD4
		::RPG::MVector3 StartDirction; // 0xD8

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
