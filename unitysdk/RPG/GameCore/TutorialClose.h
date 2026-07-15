#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALCLOSE_METHOD_3_231A7C29C6D62B00_OFFSET UNITYSDK_OFFSET(0x1B068750)
#define RPG_GAMECORE_TUTORIALCLOSE_METHOD_3_CA858500375C01BD_OFFSET UNITYSDK_OFFSET(0x1B068820)
#define RPG_GAMECORE_TUTORIALCLOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B068810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialClose_TypeDefinitionIndex = 23496;

	class TutorialClose : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLOSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_231A7C29C6D62B00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialClose*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialClose*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLOSE_METHOD_3_231A7C29C6D62B00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA858500375C01BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialClose* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialClose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLOSE_METHOD_3_CA858500375C01BD_OFFSET))(a1, a2);
		}
	};
}
