#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHSTEALCONFIG_METHOD_2_4F6517BBFF4D83D1_OFFSET UNITYSDK_OFFSET(0x1B4C3C30)
#define RPG_GAMECORE_PHOTOGRAPHSTEALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C47E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphStealConfig_TypeDefinitionIndex = 18309;

	class PhotoGraphStealConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single MaxDistance; // 0x14
		::System::Single MinSizeScale; // 0x18
		::System::Single MaxSizeScale; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSTEALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4F6517BBFF4D83D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphStealConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphStealConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSTEALCONFIG_METHOD_2_4F6517BBFF4D83D1_OFFSET))(a1, a2);
		}
	};
}
