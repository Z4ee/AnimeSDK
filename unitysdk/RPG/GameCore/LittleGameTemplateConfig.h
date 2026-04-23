#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMETEMPLATECONFIG_METHOD_2_4687957CE64D7BB2_OFFSET UNITYSDK_OFFSET(0x18A6EF10)
#define RPG_GAMECORE_LITTLEGAMETEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6EF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameTemplateConfig_TypeDefinitionIndex = 17961;

	class LittleGameTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4687957CE64D7BB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETEMPLATECONFIG_METHOD_2_4687957CE64D7BB2_OFFSET))(a1, a2);
		}
	};
}
