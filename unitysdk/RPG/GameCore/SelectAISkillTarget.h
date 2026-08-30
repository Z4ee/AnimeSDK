#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AISelector; }
namespace System { class String; }

#define RPG_GAMECORE_SELECTAISKILLTARGET_METHOD_3_BB17562390BCF826_OFFSET UNITYSDK_OFFSET(0x1DB4A6E0)
#define RPG_GAMECORE_SELECTAISKILLTARGET_METHOD_3_CD2CF031EB10658F_OFFSET UNITYSDK_OFFSET(0x1DB4A720)
#define RPG_GAMECORE_SELECTAISKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4A710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectAISkillTarget_TypeDefinitionIndex = 22185;

	class SelectAISkillTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SkillName; // 0x18
		::System::Boolean UseDefault; // 0x20
		::RPG::GameCore::AISelector* Selector; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTAISKILLTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB17562390BCF826(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SelectAISkillTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SelectAISkillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTAISKILLTARGET_METHOD_3_BB17562390BCF826_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD2CF031EB10658F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SelectAISkillTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SelectAISkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTAISKILLTARGET_METHOD_3_CD2CF031EB10658F_OFFSET))(a1, a2);
		}
	};
}
