#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_METHOD_3_1F7201705E2E5A75_OFFSET UNITYSDK_OFFSET(0x19CA16D0)
#define RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_METHOD_3_E48FA212B6B09AC0_OFFSET UNITYSDK_OFFSET(0x19CA1750)
#define RPG_GAMECORE_STACKCRAZYAIBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA1720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackCrazyAIBehavior_TypeDefinitionIndex = 22349;

	class StackCrazyAIBehavior : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CrazyAIBehaviorPriority; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillLayoutKey>* ValidTypes; // 0x20
		::System::Boolean ChaosTargeting; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCRAZYAIBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F7201705E2E5A75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackCrazyAIBehavior*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackCrazyAIBehavior*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_METHOD_3_1F7201705E2E5A75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E48FA212B6B09AC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackCrazyAIBehavior* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackCrazyAIBehavior*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_METHOD_3_E48FA212B6B09AC0_OFFSET))(a1, a2);
		}
	};
}
