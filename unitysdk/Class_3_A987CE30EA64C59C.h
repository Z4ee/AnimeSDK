#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_07A210D994F284D8_5;
namespace RPG::GameCore { class SetBattleAchievement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A987CE30EA64C59C_METHOD_3_0B019561A054DC9D_OFFSET UNITYSDK_OFFSET(0x165B5230)
#define CLASS_3_A987CE30EA64C59C_METHOD_3_2988C517CD328A1E_OFFSET UNITYSDK_OFFSET(0x165B5910)
#define CLASS_3_A987CE30EA64C59C_METHOD_3_B9CD0E2108570D39_OFFSET UNITYSDK_OFFSET(0x165B4ED0)
#define CLASS_3_A987CE30EA64C59C_METHOD_3_C9AEB9AE78C7C6F0_OFFSET UNITYSDK_OFFSET(0x165B55A0)
#define CLASS_3_A987CE30EA64C59C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165B4E20)
#define CLASS_3_A987CE30EA64C59C__CTOR_OFFSET UNITYSDK_OFFSET(0x165B4DF0)

inline static constexpr unsigned int Class_3_A987CE30EA64C59C_TypeDefinitionIndex = 55890;

class Class_3_A987CE30EA64C59C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleAchievement*>
{
public:
	::Class_1_07A210D994F284D8_5* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleAchievement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleAchievement*))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C9AEB9AE78C7C6F0(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_C9AEB9AE78C7C6F0_OFFSET))(this, a1);
	}

	::System::Void Method_3_0B019561A054DC9D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_0B019561A054DC9D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_B9CD0E2108570D39()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_B9CD0E2108570D39_OFFSET))(this);
	}

	::System::Boolean Method_3_2988C517CD328A1E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_2988C517CD328A1E_OFFSET))(this);
	}
};
