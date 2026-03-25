#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_07A210D994F284D8_4;
namespace RPG::GameCore { class SetBattleAchievement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A987CE30EA64C59C_METHOD_3_3F25D69BC03F4A8A_OFFSET UNITYSDK_OFFSET(0x8789010)
#define CLASS_3_A987CE30EA64C59C_METHOD_3_970C328218B17737_OFFSET UNITYSDK_OFFSET(0x8788D80)
#define CLASS_3_A987CE30EA64C59C_METHOD_3_D146D61DA24B99DB_OFFSET UNITYSDK_OFFSET(0x8788B50)
#define CLASS_3_A987CE30EA64C59C_METHOD_3_FF0E709C2B9D8A2E_OFFSET UNITYSDK_OFFSET(0x8789240)
#define CLASS_3_A987CE30EA64C59C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8788AA0)
#define CLASS_3_A987CE30EA64C59C__CTOR_OFFSET UNITYSDK_OFFSET(0x8788A70)

inline static constexpr unsigned int Class_3_A987CE30EA64C59C_TypeDefinitionIndex = 47208;

class Class_3_A987CE30EA64C59C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleAchievement*>
{
public:
	::Class_1_07A210D994F284D8_4* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleAchievement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleAchievement*))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_3F25D69BC03F4A8A(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_3F25D69BC03F4A8A_OFFSET))(this, a1);
	}

	::System::Void Method_3_970C328218B17737(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_970C328218B17737_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D146D61DA24B99DB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_D146D61DA24B99DB_OFFSET))(this);
	}

	::System::Boolean Method_3_FF0E709C2B9D8A2E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_FF0E709C2B9D8A2E_OFFSET))(this);
	}
};
