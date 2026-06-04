#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEAVATARASSISTANT_METHOD_3_6C2C541D8723DF6A_OFFSET UNITYSDK_OFFSET(0x1967F7B0)
#define RPG_GAMECORE_CREATEAVATARASSISTANT_METHOD_3_EE674344CF57AFA3_OFFSET UNITYSDK_OFFSET(0x1967F830)
#define RPG_GAMECORE_CREATEAVATARASSISTANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1967F800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateAvatarAssistant_TypeDefinitionIndex = 22117;

	class CreateAvatarAssistant : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SpecialAvatarID; // 0x18
		::RPG::GameCore::DynamicFloat* SpecialAvatarIDKey; // 0x20
		::RPG::GameCore::DynamicFloat* AssistantTriggerKey; // 0x28
		::RPG::GameCore::DynamicFloat* AssistantAbilityKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAVATARASSISTANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C2C541D8723DF6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateAvatarAssistant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateAvatarAssistant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAVATARASSISTANT_METHOD_3_6C2C541D8723DF6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE674344CF57AFA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAVATARASSISTANT_METHOD_3_EE674344CF57AFA3_OFFSET))(a1, a2);
		}
	};
}
