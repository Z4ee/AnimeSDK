#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionChenLingFactoryStateInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION_METHOD_3_316CB9B5D9E3CCBB_OFFSET UNITYSDK_OFFSET(0x1C12AC30)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION_METHOD_3_ED53B2086C1A772B_OFFSET UNITYSDK_OFFSET(0x1C12AE40)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12AC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession_TypeDefinitionIndex = 17111;

	class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession : public ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo
	{
	public:
		::Il2CppArray<::System::String*>* PossessionIDs; // 0x10
		::System::String* OverrideWalkStyleAnimName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED53B2086C1A772B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION_METHOD_3_ED53B2086C1A772B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_316CB9B5D9E3CCBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION_METHOD_3_316CB9B5D9E3CCBB_OFFSET))(a1, a2);
		}
	};
}
