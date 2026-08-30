#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FREESTYLESTATETEMPLATEPREVIEWCONFIG_METHOD_2_E8945F9E54EC3410_OFFSET UNITYSDK_OFFSET(0x1DCBC750)
#define RPG_GAMECORE_FREESTYLESTATETEMPLATEPREVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBC790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleStateTemplatePreviewConfig_TypeDefinitionIndex = 16143;

	class FreeStyleStateTemplatePreviewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATEPREVIEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E8945F9E54EC3410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleStateTemplatePreviewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleStateTemplatePreviewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATEPREVIEWCONFIG_METHOD_2_E8945F9E54EC3410_OFFSET))(a1, a2);
		}
	};
}
