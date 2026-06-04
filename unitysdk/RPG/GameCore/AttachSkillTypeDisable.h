#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_METHOD_3_6918773CAB93E873_OFFSET UNITYSDK_OFFSET(0x194860B0)
#define RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_METHOD_3_8C9AA34F0E7F4694_OFFSET UNITYSDK_OFFSET(0x19486030)
#define RPG_GAMECORE_ATTACHSKILLTYPEDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19486080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachSkillTypeDisable_TypeDefinitionIndex = 22319;

	class AttachSkillTypeDisable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* Types; // 0x20
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* ControlSkillTypes; // 0x28
		::RPG::Client::TextID TextmapID; // 0x30
		::RPG::Client::TextID Tip; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHSKILLTYPEDISABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C9AA34F0E7F4694(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachSkillTypeDisable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachSkillTypeDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_METHOD_3_8C9AA34F0E7F4694_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6918773CAB93E873(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_METHOD_3_6918773CAB93E873_OFFSET))(a1, a2);
		}
	};
}
