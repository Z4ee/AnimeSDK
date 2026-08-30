#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2RoadInvisibleSegmentInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadPointInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADINFO_METHOD_2_6424ED1D783B7AD2_OFFSET UNITYSDK_OFFSET(0x1C12DE70)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12E030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadInfo_TypeDefinitionIndex = 17096;

	class LevelPedestrianV2RoadInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadPointInfo*>* RoadPoints; // 0x10
		::System::Single Weight; // 0x18
		::System::String* DynamicWeightBindFSVName; // 0x20
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadInvisibleSegmentInfo*>* InvisibleSegmentInfoList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6424ED1D783B7AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2RoadInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2RoadInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADINFO_METHOD_2_6424ED1D783B7AD2_OFFSET))(a1, a2);
		}
	};
}
