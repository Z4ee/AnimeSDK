#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureCharacterFloatingTemplateConfig; }

#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIGS_METHOD_2_F1F77C38D434BC8F_OFFSET UNITYSDK_OFFSET(0x1944DAF0)
#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1944DBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterFloatingTemplateConfigs_TypeDefinitionIndex = 16629;

	class AdventureCharacterFloatingTemplateConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*>* TemplateList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F1F77C38D434BC8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIGS_METHOD_2_F1F77C38D434BC8F_OFFSET))(a1, a2);
		}
	};
}
