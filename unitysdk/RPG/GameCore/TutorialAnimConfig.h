#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALANIMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190D4900)
#define RPG_GAMECORE_TUTORIALANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190D4AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialAnimConfig_TypeDefinitionIndex = 23349;

	class TutorialAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseAnim; // 0x10
		::System::Single InitScale; // 0x14
		::System::Single TotalTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALANIMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TutorialAnimConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialAnimConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALANIMCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
