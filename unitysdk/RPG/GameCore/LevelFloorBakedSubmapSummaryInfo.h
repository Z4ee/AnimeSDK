#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelFloorBakedSubmapInfo; }

#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYINFO_METHOD_2_2E885AD8776D77DD_OFFSET UNITYSDK_OFFSET(0x1C114490)
#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1145F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorBakedSubmapSummaryInfo_TypeDefinitionIndex = 16970;

	class LevelFloorBakedSubmapSummaryInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::Il2CppArray<::RPG::GameCore::LevelFloorBakedSubmapInfo*>* SubmapList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2E885AD8776D77DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelFloorBakedSubmapSummaryInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelFloorBakedSubmapSummaryInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYINFO_METHOD_2_2E885AD8776D77DD_OFFSET))(a1, a2);
		}
	};
}
