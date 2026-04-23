#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELATIONLEVELSETTING_METHOD_2_DBFB2CE49A1849FB_OFFSET UNITYSDK_OFFSET(0x18898790)
#define RPG_GAMECORE_ELATIONLEVELSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x188988E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationLevelSetting_TypeDefinitionIndex = 16250;

	class ElationLevelSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 SmallThreshold; // 0x10
		::System::Int32 LargeThreshold; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONLEVELSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DBFB2CE49A1849FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationLevelSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationLevelSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONLEVELSETTING_METHOD_2_DBFB2CE49A1849FB_OFFSET))(a1, a2);
		}
	};
}
