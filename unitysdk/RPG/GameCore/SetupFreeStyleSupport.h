#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETUPFREESTYLESUPPORT_METHOD_3_00E52D42D7394866_OFFSET UNITYSDK_OFFSET(0x1BE2FB20)
#define RPG_GAMECORE_SETUPFREESTYLESUPPORT_METHOD_3_3F7C9CA715B74BF3_OFFSET UNITYSDK_OFFSET(0x1BE2FA80)
#define RPG_GAMECORE_SETUPFREESTYLESUPPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2FAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupFreeStyleSupport_TypeDefinitionIndex = 21100;

	class SetupFreeStyleSupport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* FreeStyleCharacterID; // 0x28
		::System::String* FreeStyleCharacterConfigPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPFREESTYLESUPPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F7C9CA715B74BF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupFreeStyleSupport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupFreeStyleSupport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPFREESTYLESUPPORT_METHOD_3_3F7C9CA715B74BF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00E52D42D7394866(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupFreeStyleSupport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupFreeStyleSupport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPFREESTYLESUPPORT_METHOD_3_00E52D42D7394866_OFFSET))(a1, a2);
		}
	};
}
