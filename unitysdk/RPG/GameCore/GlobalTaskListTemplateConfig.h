#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskListTemplate; }

#define RPG_GAMECORE_GLOBALTASKLISTTEMPLATECONFIG_METHOD_2_2DD6F3E68EF7D6C7_OFFSET UNITYSDK_OFFSET(0x189988B0)
#define RPG_GAMECORE_GLOBALTASKLISTTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189989B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalTaskListTemplateConfig_TypeDefinitionIndex = 17332;

	class GlobalTaskListTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* TaskListTemplate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTASKLISTTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2DD6F3E68EF7D6C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalTaskListTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalTaskListTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTASKLISTTEMPLATECONFIG_METHOD_2_2DD6F3E68EF7D6C7_OFFSET))(a1, a2);
		}
	};
}
