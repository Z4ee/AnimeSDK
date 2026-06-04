#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureCharacterFloatingConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIG_METHOD_2_FF72FC8650BC7384_OFFSET UNITYSDK_OFFSET(0x1944DA00)
#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1944DAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterFloatingTemplateConfig_TypeDefinitionIndex = 16628;

	class AdventureCharacterFloatingTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::AdventureCharacterFloatingConfig* FloatingConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FF72FC8650BC7384(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIG_METHOD_2_FF72FC8650BC7384_OFFSET))(a1, a2);
		}
	};
}
