#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDANMUTRACK_METHOD_2_A1E0EF023D75345B_OFFSET UNITYSDK_OFFSET(0x19737D30)
#define RPG_GAMECORE_FIVEDIMDANMUTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19737EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDanmuTrack_TypeDefinitionIndex = 17912;

	class FiveDimDanmuTrack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TrackID; // 0x10
		::RPG::MVector3 Position; // 0x14
		::System::Single Angle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A1E0EF023D75345B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDanmuTrack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDanmuTrack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUTRACK_METHOD_2_A1E0EF023D75345B_OFFSET))(a1, a2);
		}
	};
}
