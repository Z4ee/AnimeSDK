#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANCHORCONFIG_METHOD_2_8E79BBCF1255750F_OFFSET UNITYSDK_OFFSET(0x1A055C60)
#define RPG_GAMECORE_ANCHORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A055CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnchorConfig_TypeDefinitionIndex = 10277;

	class AnchorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8E79BBCF1255750F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnchorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnchorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORCONFIG_METHOD_2_8E79BBCF1255750F_OFFSET))(a1, a2);
		}
	};
}
