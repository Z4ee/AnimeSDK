#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianFlowInfo; }
namespace RPG::GameCore { class LevelPedestrianLineUpPointInfo; }
namespace RPG::GameCore { class LevelPedestrianMemberInfo; }
namespace RPG::GameCore { class LevelPedestrianNodeInfo; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANINFO_METHOD_4_688F389C02924672_OFFSET UNITYSDK_OFFSET(0x1C129050)
#define RPG_GAMECORE_LEVELPEDESTRIANINFO_METHOD_4_7DE0CA62F8AD8A63_OFFSET UNITYSDK_OFFSET(0x1C126550)
#define RPG_GAMECORE_LEVELPEDESTRIANINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C126540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianInfo_TypeDefinitionIndex = 17092;

	class LevelPedestrianInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianMemberInfo*>* Members; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelPedestrianFlowInfo*>* Flows; // 0x40
		::Il2CppArray<::RPG::GameCore::LevelPedestrianNodeInfo*>* Path; // 0x48
		::Il2CppArray<::RPG::GameCore::LevelPedestrianLineUpPointInfo*>* LineUps; // 0x50
		::System::Single ForwardTrafficPerMinute; // 0x58
		::System::Single BackwardTrafficPerMinute; // 0x5C
		::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>* WalkStyleOverrideList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_688F389C02924672(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANINFO_METHOD_4_688F389C02924672_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7DE0CA62F8AD8A63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANINFO_METHOD_4_7DE0CA62F8AD8A63_OFFSET))(a1, a2);
		}
	};
}
