#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_METHOD_4_893AB50A447E7666_OFFSET UNITYSDK_OFFSET(0x1D1E3820)
#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_METHOD_4_BFE6397041B06764_OFFSET UNITYSDK_OFFSET(0x1D1EAD80)
#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2SpawnGroupInfo_TypeDefinitionIndex = 17125;

	class LevelPedestrianV2SpawnGroupInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BFE6397041B06764(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_METHOD_4_BFE6397041B06764_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_893AB50A447E7666(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_METHOD_4_893AB50A447E7666_OFFSET))(a1, a2);
		}
	};
}
