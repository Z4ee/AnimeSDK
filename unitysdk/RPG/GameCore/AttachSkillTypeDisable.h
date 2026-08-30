#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_METHOD_3_BAEA28A9D337621A_OFFSET UNITYSDK_OFFSET(0x1CE2C240)
#define RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_METHOD_3_F38301C9D9B7CF9A_OFFSET UNITYSDK_OFFSET(0x1CE2C200)
#define RPG_GAMECORE_ATTACHSKILLTYPEDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2C230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachSkillTypeDisable_TypeDefinitionIndex = 23337;

	class AttachSkillTypeDisable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* Types; // 0x20
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* ControlSkillTypes; // 0x28
		::Il2CppArray<::System::String*>* SkillNames; // 0x30
		::RPG::Client::TextID TextmapID; // 0x38
		::RPG::Client::TextID Tip; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHSKILLTYPEDISABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F38301C9D9B7CF9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachSkillTypeDisable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachSkillTypeDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_METHOD_3_F38301C9D9B7CF9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BAEA28A9D337621A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_METHOD_3_BAEA28A9D337621A_OFFSET))(a1, a2);
		}
	};
}
