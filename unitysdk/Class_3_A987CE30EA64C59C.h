#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_07A210D994F284D8_4;
namespace RPG::GameCore { class SetBattleAchievement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A987CE30EA64C59C_METHOD_3_0B019561A054DC9D_OFFSET UNITYSDK_OFFSET(0xAA70760)
#define CLASS_3_A987CE30EA64C59C_METHOD_3_31FC7978777634F0_OFFSET UNITYSDK_OFFSET(0xAA70E40)
#define CLASS_3_A987CE30EA64C59C_METHOD_3_C9AEB9AE78C7C6F0_OFFSET UNITYSDK_OFFSET(0xAA70AD0)
#define CLASS_3_A987CE30EA64C59C_METHOD_3_F133162ABA946CC7_OFFSET UNITYSDK_OFFSET(0xAA704C0)
#define CLASS_3_A987CE30EA64C59C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA70410)
#define CLASS_3_A987CE30EA64C59C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA703E0)

inline static constexpr unsigned int Class_3_A987CE30EA64C59C_TypeDefinitionIndex = 54665;

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

	::System::Void Method_3_C9AEB9AE78C7C6F0(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_C9AEB9AE78C7C6F0_OFFSET))(this, a1);
	}

	::System::Void Method_3_0B019561A054DC9D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_0B019561A054DC9D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F133162ABA946CC7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_F133162ABA946CC7_OFFSET))(this);
	}

	::System::Boolean Method_3_31FC7978777634F0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A987CE30EA64C59C_METHOD_3_31FC7978777634F0_OFFSET))(this);
	}
};
