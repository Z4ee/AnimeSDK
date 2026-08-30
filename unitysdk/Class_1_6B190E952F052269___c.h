#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_6B190E952F052269___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161D6470)
#define CLASS_1_6B190E952F052269___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161D64B0)
#define CLASS_1_6B190E952F052269___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORAVATARSKILL_B__63_0_OFFSET UNITYSDK_OFFSET(0x161D64C0)
#define CLASS_1_6B190E952F052269___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORBATTLEEVENTSKILL_B__64_0_OFFSET UNITYSDK_OFFSET(0x161D6500)
#define CLASS_1_6B190E952F052269___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORSERVANTSKILL_B__65_0_OFFSET UNITYSDK_OFFSET(0x161D6550)
#define CLASS_1_6B190E952F052269___C___APPLYRANKSKILLPARAMETERMODIFICATIONSFORBATTLEEVENTSKILL_B__66_0_OFFSET UNITYSDK_OFFSET(0x161D6590)

inline static constexpr unsigned int Class_1_6B190E952F052269___c_TypeDefinitionIndex = 59209;

class Class_1_6B190E952F052269___c : public ::System::Object
{
public:
	static ::Class_1_6B190E952F052269___c** StaticGet___9()
	{
		return (::Class_1_6B190E952F052269___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269___c_TypeDefinitionIndex)->GetStaticField(0x44B90);
	}
	static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__63_0()
	{
		return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269___c_TypeDefinitionIndex)->GetStaticField(0x44B98);
	}
	static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__66_0()
	{
		return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269___c_TypeDefinitionIndex)->GetStaticField(0x44BA0);
	}
	static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__65_0()
	{
		return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269___c_TypeDefinitionIndex)->GetStaticField(0x44BA8);
	}
	static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__64_0()
	{
		return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269___c_TypeDefinitionIndex)->GetStaticField(0x44BB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyCyreneSkillParameterModificationsForAvatarSkill_b__63_0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORAVATARSKILL_B__63_0_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyCyreneSkillParameterModificationsForBattleEventSkill_b__64_0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORBATTLEEVENTSKILL_B__64_0_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyCyreneSkillParameterModificationsForServantSkill_b__65_0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORSERVANTSKILL_B__65_0_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyRankSkillParameterModificationsForBattleEventSkill_b__66_0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269___C___APPLYRANKSKILLPARAMETERMODIFICATIONSFORBATTLEEVENTSKILL_B__66_0_OFFSET))(this, a1, a2);
	}
};
