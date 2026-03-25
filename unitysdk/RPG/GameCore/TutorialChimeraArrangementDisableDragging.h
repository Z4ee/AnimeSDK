#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_METHOD_3_170561BABF8E5088_OFFSET UNITYSDK_OFFSET(0x178D67D0)
#define RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_METHOD_3_EFB9B506BC18A821_OFFSET UNITYSDK_OFFSET(0x178D6750)
#define RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING__CTOR_OFFSET UNITYSDK_OFFSET(0x178D67A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialChimeraArrangementDisableDragging_TypeDefinitionIndex = 22429;

	class TutorialChimeraArrangementDisableDragging : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DisableDragging; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFB9B506BC18A821(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_METHOD_3_EFB9B506BC18A821_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_170561BABF8E5088(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_METHOD_3_170561BABF8E5088_OFFSET))(a1, a2);
		}
	};
}
