#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_WAITSKILLINPUT_METHOD_3_81EC2D3F617514F3_OFFSET UNITYSDK_OFFSET(0x19E614E0)
#define RPG_GAMECORE_WAITSKILLINPUT_METHOD_3_83E1A96F26F6ACF9_OFFSET UNITYSDK_OFFSET(0x19E61560)
#define RPG_GAMECORE_WAITSKILLINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E61530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSkillInput_TypeDefinitionIndex = 19063;

	class WaitSkillInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureSkillType>* WaitInputType; // 0x18
		::System::Boolean WaitInteraction; // 0x20
		::System::Boolean CheckAllowUseSkill; // 0x21
		::RPG::GameCore::DynamicFloat* MaxWaitTime; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInput; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTimeout; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInteraction; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81EC2D3F617514F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSkillInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSkillInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLINPUT_METHOD_3_81EC2D3F617514F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_83E1A96F26F6ACF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSkillInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSkillInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLINPUT_METHOD_3_83E1A96F26F6ACF9_OFFSET))(a1, a2);
		}
	};
}
