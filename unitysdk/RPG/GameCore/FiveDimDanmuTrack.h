#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDANMUTRACK_METHOD_2_F2E0C3DFC9B7F952_OFFSET UNITYSDK_OFFSET(0x171EE930)
#define RPG_GAMECORE_FIVEDIMDANMUTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x171EEA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDanmuTrack_TypeDefinitionIndex = 17275;

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

		static ::System::Void Method_2_F2E0C3DFC9B7F952(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDanmuTrack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDanmuTrack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUTRACK_METHOD_2_F2E0C3DFC9B7F952_OFFSET))(a1, a2);
		}
	};
}
