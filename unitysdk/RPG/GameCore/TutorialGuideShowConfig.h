#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG_METHOD_2_66F0C317C5EE65D5_OFFSET UNITYSDK_OFFSET(0x190DA340)
#define RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190DA550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideShowConfig_TypeDefinitionIndex = 23337;

	class TutorialGuideShowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseCustomConfig; // 0x10
		::System::Single ScaleX; // 0x14
		::System::Single ScaleY; // 0x18
		::System::Single OffsetX; // 0x1C
		::System::Single OffsetY; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_66F0C317C5EE65D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideShowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideShowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG_METHOD_2_66F0C317C5EE65D5_OFFSET))(a1, a2);
		}
	};
}
