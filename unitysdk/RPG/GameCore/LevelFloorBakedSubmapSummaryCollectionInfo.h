#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelFloorBakedSubmapSummaryInfo; }

#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYCOLLECTIONINFO_METHOD_2_B413D07E47D0E3CC_OFFSET UNITYSDK_OFFSET(0x1C1143C0)
#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYCOLLECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C114480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorBakedSubmapSummaryCollectionInfo_TypeDefinitionIndex = 16971;

	class LevelFloorBakedSubmapSummaryCollectionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelFloorBakedSubmapSummaryInfo*>* FloorSummaryList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYCOLLECTIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B413D07E47D0E3CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelFloorBakedSubmapSummaryCollectionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelFloorBakedSubmapSummaryCollectionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYCOLLECTIONINFO_METHOD_2_B413D07E47D0E3CC_OFFSET))(a1, a2);
		}
	};
}
