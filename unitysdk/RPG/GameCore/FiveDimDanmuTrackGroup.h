#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDANMUTRACKGROUP_METHOD_2_566617BADDF04B47_OFFSET UNITYSDK_OFFSET(0x1D0DF540)
#define RPG_GAMECORE_FIVEDIMDANMUTRACKGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DF680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDanmuTrackGroup_TypeDefinitionIndex = 18615;

	class FiveDimDanmuTrackGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TrackGroupID; // 0x10
		::Il2CppArray<::System::UInt32>* TrackIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUTRACKGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_566617BADDF04B47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDanmuTrackGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDanmuTrackGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUTRACKGROUP_METHOD_2_566617BADDF04B47_OFFSET))(a1, a2);
		}
	};
}
