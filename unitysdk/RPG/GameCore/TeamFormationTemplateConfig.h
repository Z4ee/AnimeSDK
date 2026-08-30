#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamFormationTemplateSingleConfig; }

#define RPG_GAMECORE_TEAMFORMATIONTEMPLATECONFIG_METHOD_2_40BBC85B884BA868_OFFSET UNITYSDK_OFFSET(0x1E1CB0B0)
#define RPG_GAMECORE_TEAMFORMATIONTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CB1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationTemplateConfig_TypeDefinitionIndex = 16407;

	class TeamFormationTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamFormationTemplateSingleConfig*>* TemplateSingleConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_40BBC85B884BA868(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamFormationTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamFormationTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONTEMPLATECONFIG_METHOD_2_40BBC85B884BA868_OFFSET))(a1, a2);
		}
	};
}
