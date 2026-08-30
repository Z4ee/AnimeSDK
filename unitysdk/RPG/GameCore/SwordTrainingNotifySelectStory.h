#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_METHOD_3_6C9060E8760D44F0_OFFSET UNITYSDK_OFFSET(0x1D593E40)
#define RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_METHOD_3_B806B39077A64E1B_OFFSET UNITYSDK_OFFSET(0x1D593E80)
#define RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D593E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingNotifySelectStory_TypeDefinitionIndex = 20090;

	class SwordTrainingNotifySelectStory : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StoryID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C9060E8760D44F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingNotifySelectStory*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingNotifySelectStory*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_METHOD_3_6C9060E8760D44F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B806B39077A64E1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingNotifySelectStory* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingNotifySelectStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_METHOD_3_B806B39077A64E1B_OFFSET))(a1, a2);
		}
	};
}
