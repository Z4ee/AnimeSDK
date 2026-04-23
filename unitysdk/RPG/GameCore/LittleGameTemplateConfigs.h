#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMETEMPLATECONFIGS_METHOD_2_513DF7E17444C5D7_OFFSET UNITYSDK_OFFSET(0x18A6EF60)
#define RPG_GAMECORE_LITTLEGAMETEMPLATECONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6EFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameTemplateConfigs_TypeDefinitionIndex = 17959;

	class LittleGameTemplateConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETEMPLATECONFIGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_513DF7E17444C5D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameTemplateConfigs*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameTemplateConfigs*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETEMPLATECONFIGS_METHOD_2_513DF7E17444C5D7_OFFSET))(a1, a2);
		}
	};
}
