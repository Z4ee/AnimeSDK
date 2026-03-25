#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_METHOD_3_66893F6EC5C64B59_OFFSET UNITYSDK_OFFSET(0x17153360)
#define RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_METHOD_3_AEB0835A8A24BA11_OFFSET UNITYSDK_OFFSET(0x17153210)
#define RPG_GAMECORE_DEPLOYPUZZLEFADEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x171532D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleFadeout_TypeDefinitionIndex = 20155;

	class DeployPuzzleFadeout : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single LineFadeoutDuration; // 0x20
		::System::String* StoneFadeoutTrigger; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEFADEOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AEB0835A8A24BA11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleFadeout*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleFadeout*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_METHOD_3_AEB0835A8A24BA11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66893F6EC5C64B59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleFadeout* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleFadeout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_METHOD_3_66893F6EC5C64B59_OFFSET))(a1, a2);
		}
	};
}
