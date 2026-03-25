#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELSMARTOBJECTCOMMONPOINTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1734C490)
#define RPG_GAMECORE_LEVELSMARTOBJECTCOMMONPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1734C690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSmartObjectCommonPointInfo_TypeDefinitionIndex = 15954;

	class LevelSmartObjectCommonPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Single PosX; // 0x14
		::System::Single PosY; // 0x18
		::System::Single PosZ; // 0x1C
		::System::Single RotY; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTCOMMONPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelSmartObjectCommonPointInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSmartObjectCommonPointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTCOMMONPOINTINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
