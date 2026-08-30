#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_METHOD_3_C377C589DB3527E4_OFFSET UNITYSDK_OFFSET(0x1D863AD0)
#define RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_METHOD_3_C92A9C822C9A7F41_OFFSET UNITYSDK_OFFSET(0x1D863B10)
#define RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D863B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierBakedMoveConfig_TypeDefinitionIndex = 16509;

	class FiveDimGrenadierBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Single LaunchSpeed; // 0x30
		::System::Single AttackDistance; // 0x34
		::RPG::MVector3 CreationOffset; // 0x38
		::System::Single ParabolaHeightOffset; // 0x44
		::System::Single AttackDistancePerpendicular; // 0x48
		::System::Single TraceOffset; // 0x4C
		::System::Single TraceAcceleration; // 0x50
		::System::Single TraceDeceleration; // 0x54
		::System::Single TraceDistanceThreshold; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C377C589DB3527E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_METHOD_3_C377C589DB3527E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C92A9C822C9A7F41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_METHOD_3_C92A9C822C9A7F41_OFFSET))(a1, a2);
		}
	};
}
