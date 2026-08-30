#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEIDPAIR_METHOD_2_6866484A1AEA1050_OFFSET UNITYSDK_OFFSET(0x1D319090)
#define RPG_GAMECORE_PERFORMANCEIDPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D319190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceIDPair_TypeDefinitionIndex = 18815;

	class PerformanceIDPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEIDPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6866484A1AEA1050(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceIDPair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceIDPair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEIDPAIR_METHOD_2_6866484A1AEA1050_OFFSET))(a1, a2);
		}
	};
}
