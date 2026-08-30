#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrowdAnchorInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_METHOD_3_4421C6E3EA24CA2B_OFFSET UNITYSDK_OFFSET(0x1D1E8A20)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_METHOD_3_6E03F4433C58D4C4_OFFSET UNITYSDK_OFFSET(0x1D1E89E0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E8A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionCrowdInfo_TypeDefinitionIndex = 17116;

	class LevelPedestrianV2IntersectionCrowdInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionCrowdAnchorInfo*>* Anchors; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E03F4433C58D4C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_METHOD_3_6E03F4433C58D4C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4421C6E3EA24CA2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_METHOD_3_4421C6E3EA24CA2B_OFFSET))(a1, a2);
		}
	};
}
