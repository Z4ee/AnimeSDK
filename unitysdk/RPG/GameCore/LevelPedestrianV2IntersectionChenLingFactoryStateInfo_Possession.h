#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionChenLingFactoryStateInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION_METHOD_3_6639618E48AB606A_OFFSET UNITYSDK_OFFSET(0x18A54770)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION_METHOD_3_978BCAEBDD4AE471_OFFSET UNITYSDK_OFFSET(0x18A54560)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A54550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession_TypeDefinitionIndex = 16423;

	class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession : public ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo
	{
	public:
		::Il2CppArray<::System::String*>* PossessionIDs; // 0x10
		::System::String* OverrideWalkStyleAnimName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6639618E48AB606A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION_METHOD_3_6639618E48AB606A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_978BCAEBDD4AE471(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_POSSESSION_METHOD_3_978BCAEBDD4AE471_OFFSET))(a1, a2);
		}
	};
}
