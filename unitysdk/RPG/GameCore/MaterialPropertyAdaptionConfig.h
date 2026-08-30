#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MaterialPropertyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MATERIALPROPERTYADAPTIONCONFIG_METHOD_2_4C72F6776953E482_OFFSET UNITYSDK_OFFSET(0x1D270E10)
#define RPG_GAMECORE_MATERIALPROPERTYADAPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D270F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialPropertyAdaptionConfig_TypeDefinitionIndex = 16335;

	class MaterialPropertyAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RenderName; // 0x10
		::RPG::GameCore::MaterialPropertyConfig* MaterialPropertyConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALPROPERTYADAPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4C72F6776953E482(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MaterialPropertyAdaptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MaterialPropertyAdaptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALPROPERTYADAPTIONCONFIG_METHOD_2_4C72F6776953E482_OFFSET))(a1, a2);
		}
	};
}
