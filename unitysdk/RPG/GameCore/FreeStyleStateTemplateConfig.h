#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleStateTemplate; }

#define RPG_GAMECORE_FREESTYLESTATETEMPLATECONFIG_METHOD_2_5CCF7B78D394B484_OFFSET UNITYSDK_OFFSET(0x1B980AE0)
#define RPG_GAMECORE_FREESTYLESTATETEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B980BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleStateTemplateConfig_TypeDefinitionIndex = 15672;

	class FreeStyleStateTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleStateTemplate*>* StateList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5CCF7B78D394B484(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleStateTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleStateTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATECONFIG_METHOD_2_5CCF7B78D394B484_OFFSET))(a1, a2);
		}
	};
}
