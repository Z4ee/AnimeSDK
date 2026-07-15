#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANFLOWINFO_METHOD_2_73447E5E24EAEC41_OFFSET UNITYSDK_OFFSET(0x1B081610)
#define RPG_GAMECORE_LEVELPEDESTRIANFLOWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0818A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianFlowInfo_TypeDefinitionIndex = 16595;

	class LevelPedestrianFlowInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StartNodeIndex; // 0x10
		::System::UInt32 EndPedestrianGroupID; // 0x14
		::System::UInt32 EndPedestrianID; // 0x18
		::System::UInt32 EndNodeIndex; // 0x1C
		::System::Boolean StartForward; // 0x20
		::System::Boolean EndForward; // 0x21
		::System::Single Weight; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANFLOWINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_73447E5E24EAEC41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianFlowInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianFlowInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANFLOWINFO_METHOD_2_73447E5E24EAEC41_OFFSET))(a1, a2);
		}
	};
}
