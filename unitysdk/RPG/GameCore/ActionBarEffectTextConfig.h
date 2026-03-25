#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONBAREFFECTTEXTCONFIG_METHOD_2_494FDA7C0A385B6E_OFFSET UNITYSDK_OFFSET(0x16E985E0)
#define RPG_GAMECORE_ACTIONBAREFFECTTEXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E98740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBarEffectTextConfig_TypeDefinitionIndex = 21150;

	class ActionBarEffectTextConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RelativePath; // 0x10
		::RPG::GameCore::DynamicFloat* CustomNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBAREFFECTTEXTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_494FDA7C0A385B6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBarEffectTextConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBarEffectTextConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBAREFFECTTEXTCONFIG_METHOD_2_494FDA7C0A385B6E_OFFSET))(a1, a2);
		}
	};
}
