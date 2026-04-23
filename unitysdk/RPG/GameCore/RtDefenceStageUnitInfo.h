#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTDEFENCESTAGEUNITINFO_METHOD_2_57CA38BB8BDF8C12_OFFSET UNITYSDK_OFFSET(0x18DCF220)
#define RPG_GAMECORE_RTDEFENCESTAGEUNITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCF460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceStageUnitInfo_TypeDefinitionIndex = 17164;

	class RtDefenceStageUnitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::RPG::GameCore::FixVec2 Pos; // 0x18
		::RPG::GameCore::FixPoint DirAngle; // 0x28
		::System::UInt32 UnitID; // 0x30
		::System::UInt32 Level; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEUNITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_57CA38BB8BDF8C12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceStageUnitInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceStageUnitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEUNITINFO_METHOD_2_57CA38BB8BDF8C12_OFFSET))(a1, a2);
		}
	};
}
