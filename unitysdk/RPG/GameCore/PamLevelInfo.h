#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PAMLEVELINFO_METHOD_2_39029B761C499F93_OFFSET UNITYSDK_OFFSET(0x174872F0)
#define RPG_GAMECORE_PAMLEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17487430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamLevelInfo_TypeDefinitionIndex = 14317;

	class PamLevelInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 InstanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMLEVELINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_39029B761C499F93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PamLevelInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamLevelInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMLEVELINFO_METHOD_2_39029B761C499F93_OFFSET))(a1, a2);
		}
	};
}
