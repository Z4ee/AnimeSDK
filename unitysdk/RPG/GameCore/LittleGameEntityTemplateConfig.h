#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEENTITYTEMPLATECONFIG_METHOD_2_73CC08FE7A770709_OFFSET UNITYSDK_OFFSET(0x1BCC1140)
#define RPG_GAMECORE_LITTLEGAMEENTITYTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC1180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityTemplateConfig_TypeDefinitionIndex = 18173;

	class LittleGameEntityTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_73CC08FE7A770709(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYTEMPLATECONFIG_METHOD_2_73CC08FE7A770709_OFFSET))(a1, a2);
		}
	};
}
