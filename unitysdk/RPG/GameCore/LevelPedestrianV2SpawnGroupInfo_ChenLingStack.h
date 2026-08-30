#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2SpawnGroupInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2ChenLingStackOffsetInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_METHOD_5_1374A33973F88D8B_OFFSET UNITYSDK_OFFSET(0x1C12E480)
#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_METHOD_5_1ED8399027A2A871_OFFSET UNITYSDK_OFFSET(0x1C127030)
#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C127020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2SpawnGroupInfo_ChenLingStack_TypeDefinitionIndex = 17128;

	class LevelPedestrianV2SpawnGroupInfo_ChenLingStack : public ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo
	{
	public:
		::System::UInt32 MinCount; // 0x38
		::System::UInt32 MaxCount; // 0x3C
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>* StackOffsets; // 0x40
		::System::Single OverrideDropTriggerRadius; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1374A33973F88D8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_METHOD_5_1374A33973F88D8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1ED8399027A2A871(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_METHOD_5_1ED8399027A2A871_OFFSET))(a1, a2);
		}
	};
}
