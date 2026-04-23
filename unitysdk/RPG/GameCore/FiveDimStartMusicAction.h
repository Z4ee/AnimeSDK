#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_METHOD_3_81013194E6CCBB9B_OFFSET UNITYSDK_OFFSET(0x1891FD30)
#define RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_METHOD_3_C5E0ADB4500425F6_OFFSET UNITYSDK_OFFSET(0x1891FC70)
#define RPG_GAMECORE_FIVEDIMSTARTMUSICACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1891FD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartMusicAction_TypeDefinitionIndex = 17764;

	class FiveDimStartMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTMUSICACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5E0ADB4500425F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartMusicAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartMusicAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_METHOD_3_C5E0ADB4500425F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_81013194E6CCBB9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartMusicAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_METHOD_3_81013194E6CCBB9B_OFFSET))(a1, a2);
		}
	};
}
