#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPROTATIONPERFORMANCEID_METHOD_2_8C75D67775879CAF_OFFSET UNITYSDK_OFFSET(0x198C2100)
#define RPG_GAMECORE_MAPROTATIONPERFORMANCEID__CTOR_OFFSET UNITYSDK_OFFSET(0x198C2230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationPerformanceID_TypeDefinitionIndex = 16172;

	class MapRotationPerformanceID : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8C75D67775879CAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationPerformanceID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationPerformanceID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCEID_METHOD_2_8C75D67775879CAF_OFFSET))(a1, a2);
		}
	};
}
