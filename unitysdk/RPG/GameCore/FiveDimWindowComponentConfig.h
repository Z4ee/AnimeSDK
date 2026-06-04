#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_METHOD_3_1B22C73BEE2618E7_OFFSET UNITYSDK_OFFSET(0x1975E530)
#define RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_METHOD_3_B26074C86B26F650_OFFSET UNITYSDK_OFFSET(0x1975E660)
#define RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1975E640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimWindowComponentConfig_TypeDefinitionIndex = 17916;

	class FiveDimWindowComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* BgPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B22C73BEE2618E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWindowComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWindowComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_METHOD_3_1B22C73BEE2618E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B26074C86B26F650(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWindowComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWindowComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_METHOD_3_B26074C86B26F650_OFFSET))(a1, a2);
		}
	};
}
