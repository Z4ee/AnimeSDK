#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_METHOD_3_E78560D1BB79999F_OFFSET UNITYSDK_OFFSET(0x18E41050)
#define RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_METHOD_3_FB889FDC6EDEE219_OFFSET UNITYSDK_OFFSET(0x18E41120)
#define RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x18E410D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSkillButtonAdditionalStatus_TypeDefinitionIndex = 22643;

	class SetSkillButtonAdditionalStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x20
		::RPG::GameCore::SkillButtonAdditionalStatusType ButtonType; // 0x24
		::System::Boolean IsActive; // 0x28
		::System::String* PrefabPath; // 0x30
		::System::String* AnimStateName; // 0x38
		::System::Single TransitionDuration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E78560D1BB79999F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSkillButtonAdditionalStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSkillButtonAdditionalStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_METHOD_3_E78560D1BB79999F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FB889FDC6EDEE219(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSkillButtonAdditionalStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSkillButtonAdditionalStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_METHOD_3_FB889FDC6EDEE219_OFFSET))(a1, a2);
		}
	};
}
