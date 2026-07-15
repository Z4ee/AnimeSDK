#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADPOINTINFO_METHOD_2_A542E1C2451810A1_OFFSET UNITYSDK_OFFSET(0x1B085A70)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B085C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadPointInfo_TypeDefinitionIndex = 16602;

	class LevelPedestrianV2RoadPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Tangent; // 0x1C
		::RPG::MVector3 Normal; // 0x28
		::System::Single Width; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A542E1C2451810A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2RoadPointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2RoadPointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADPOINTINFO_METHOD_2_A542E1C2451810A1_OFFSET))(a1, a2);
		}
	};
}
