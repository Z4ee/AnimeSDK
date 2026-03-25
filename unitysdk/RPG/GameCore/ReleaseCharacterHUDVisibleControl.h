#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_METHOD_3_C5BF4458FAAD0DC8_OFFSET UNITYSDK_OFFSET(0x1758AB90)
#define RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_METHOD_3_E1C8047C6EBA3D61_OFFSET UNITYSDK_OFFSET(0x1758AB10)
#define RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1758AB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseCharacterHUDVisibleControl_TypeDefinitionIndex = 21016;

	class ReleaseCharacterHUDVisibleControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1C8047C6EBA3D61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_METHOD_3_E1C8047C6EBA3D61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5BF4458FAAD0DC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_METHOD_3_C5BF4458FAAD0DC8_OFFSET))(a1, a2);
		}
	};
}
