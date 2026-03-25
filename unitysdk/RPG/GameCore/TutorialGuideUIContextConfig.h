#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideUIContextType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDEUICONTEXTCONFIG_METHOD_2_E5E3A9B97425398F_OFFSET UNITYSDK_OFFSET(0x178DD180)
#define RPG_GAMECORE_TUTORIALGUIDEUICONTEXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178DD2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideUIContextConfig_TypeDefinitionIndex = 22369;

	class TutorialGuideUIContextConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TutorialGuideUIContextType Type; // 0x10
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEUICONTEXTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E5E3A9B97425398F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideUIContextConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideUIContextConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEUICONTEXTCONFIG_METHOD_2_E5E3A9B97425398F_OFFSET))(a1, a2);
		}
	};
}
