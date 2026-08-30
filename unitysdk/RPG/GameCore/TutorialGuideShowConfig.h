#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG_METHOD_2_33B10A66147B7E7A_OFFSET UNITYSDK_OFFSET(0x1D2A6400)
#define RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A6630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideShowConfig_TypeDefinitionIndex = 24047;

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

		static ::System::Void Method_2_33B10A66147B7E7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideShowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideShowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG_METHOD_2_33B10A66147B7E7A_OFFSET))(a1, a2);
		}
	};
}
