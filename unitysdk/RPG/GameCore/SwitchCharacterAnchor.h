#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHCHARACTERANCHOR_METHOD_3_47BE13835D928974_OFFSET UNITYSDK_OFFSET(0x1CB17B90)
#define RPG_GAMECORE_SWITCHCHARACTERANCHOR_METHOD_3_C54D86AAB898CF29_OFFSET UNITYSDK_OFFSET(0x1CB17BE0)
#define RPG_GAMECORE_SWITCHCHARACTERANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB17BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCharacterAnchor_TypeDefinitionIndex = 20586;

	class SwitchCharacterAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLocalPlayer; // 0x18
		::System::String* CharacterUniqueName; // 0x20
		::RPG::GameCore::DynamicString* AreaName; // 0x28
		::RPG::GameCore::DynamicString* AnchorName; // 0x30
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x38
		::RPG::GameCore::TargetEvaluator* Target; // 0x40
		::System::String* AttachPoint; // 0x48
		::System::Boolean ResetAnimation; // 0x50
		::System::Boolean ResetCamera; // 0x51
		::System::Boolean ResetTurnInPlace; // 0x52
		::System::Boolean ClearSpecialVision; // 0x53

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_47BE13835D928974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCharacterAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCharacterAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHOR_METHOD_3_47BE13835D928974_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C54D86AAB898CF29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCharacterAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHOR_METHOD_3_C54D86AAB898CF29_OFFSET))(a1, a2);
		}
	};
}
