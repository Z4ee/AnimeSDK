#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MISSIONVERSIONCONSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B31830)
#define RPG_GAMECORE_MISSIONVERSIONCONSTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B31DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionVersionConstRow_TypeDefinitionIndex = 13419;

	class MissionVersionConstRow : public ::System::Object
	{
	public:
		::System::UInt32 VersionFinalMainMissionID; // 0x10
		::System::UInt32 VersionFinalGapMainMissionID; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MissionVersionConstRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionVersionConstRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
