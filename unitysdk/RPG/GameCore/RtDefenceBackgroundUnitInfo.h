#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTDEFENCEBACKGROUNDUNITINFO_METHOD_2_37F1BB344FD337CB_OFFSET UNITYSDK_OFFSET(0x1D4A71C0)
#define RPG_GAMECORE_RTDEFENCEBACKGROUNDUNITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A73C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceBackgroundUnitInfo_TypeDefinitionIndex = 17853;

	class RtDefenceBackgroundUnitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::RPG::GameCore::FixPoint DirAngle; // 0x18
		::System::UInt32 UnitID; // 0x20
		::System::UInt32 Level; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEBACKGROUNDUNITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_37F1BB344FD337CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceBackgroundUnitInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceBackgroundUnitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEBACKGROUNDUNITINFO_METHOD_2_37F1BB344FD337CB_OFFSET))(a1, a2);
		}
	};
}
