#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_METHOD_3_7258D2E7CA7536AB_OFFSET UNITYSDK_OFFSET(0x1B9C2160)
#define RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_METHOD_3_C5BF4458FAAD0DC8_OFFSET UNITYSDK_OFFSET(0x1B9C21A0)
#define RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C2190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseCharacterHUDVisibleControl_TypeDefinitionIndex = 21997;

	class ReleaseCharacterHUDVisibleControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7258D2E7CA7536AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_METHOD_3_7258D2E7CA7536AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5BF4458FAAD0DC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_METHOD_3_C5BF4458FAAD0DC8_OFFSET))(a1, a2);
		}
	};
}
