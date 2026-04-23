#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EDITORPROPTAGCOMPONENTOVERRIDECONFIG_METHOD_2_8F35A74C99218989_OFFSET UNITYSDK_OFFSET(0x18895A10)
#define RPG_GAMECORE_EDITORPROPTAGCOMPONENTOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18895A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EditorPropTagComponentOverrideConfig_TypeDefinitionIndex = 16380;

	class EditorPropTagComponentOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORPROPTAGCOMPONENTOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8F35A74C99218989(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EditorPropTagComponentOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EditorPropTagComponentOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORPROPTAGCOMPONENTOVERRIDECONFIG_METHOD_2_8F35A74C99218989_OFFSET))(a1, a2);
		}
	};
}
