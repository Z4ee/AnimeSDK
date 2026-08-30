#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_METHOD_3_170561BABF8E5088_OFFSET UNITYSDK_OFFSET(0x1D2A1560)
#define RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_METHOD_3_E701BDBE178CF86B_OFFSET UNITYSDK_OFFSET(0x1D2A1510)
#define RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A1550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialChimeraArrangementDisableDragging_TypeDefinitionIndex = 24106;

	class TutorialChimeraArrangementDisableDragging : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DisableDragging; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E701BDBE178CF86B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_METHOD_3_E701BDBE178CF86B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_170561BABF8E5088(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_METHOD_3_170561BABF8E5088_OFFSET))(a1, a2);
		}
	};
}
