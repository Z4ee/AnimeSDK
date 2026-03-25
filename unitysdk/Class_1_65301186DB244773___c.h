#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_65301186DB244773___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x118A4660)
#define CLASS_1_65301186DB244773___C__CTOR_OFFSET UNITYSDK_OFFSET(0x118A46A0)
#define CLASS_1_65301186DB244773___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORAVATARSKILL_B__60_0_OFFSET UNITYSDK_OFFSET(0x118A46B0)
#define CLASS_1_65301186DB244773___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORBATTLEEVENTSKILL_B__61_0_OFFSET UNITYSDK_OFFSET(0x118A46F0)
#define CLASS_1_65301186DB244773___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORSERVANTSKILL_B__62_0_OFFSET UNITYSDK_OFFSET(0x118A4740)
#define CLASS_1_65301186DB244773___C___APPLYRANKSKILLPARAMETERMODIFICATIONSFORBATTLEEVENTSKILL_B__63_0_OFFSET UNITYSDK_OFFSET(0x118A4780)

inline static constexpr unsigned int Class_1_65301186DB244773___c_TypeDefinitionIndex = 47727;

class Class_1_65301186DB244773___c : public ::System::Object
{
public:
	static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__62_0()
	{
		return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773___c_TypeDefinitionIndex)->GetStaticField(0x47430);
	}
	static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__60_0()
	{
		return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773___c_TypeDefinitionIndex)->GetStaticField(0x47438);
	}
	static ::Class_1_65301186DB244773___c** StaticGet___9()
	{
		return (::Class_1_65301186DB244773___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773___c_TypeDefinitionIndex)->GetStaticField(0x47440);
	}
	static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__63_0()
	{
		return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773___c_TypeDefinitionIndex)->GetStaticField(0x47448);
	}
	static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__61_0()
	{
		return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773___c_TypeDefinitionIndex)->GetStaticField(0x47450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyCyreneSkillParameterModificationsForAvatarSkill_b__60_0(::System::UInt32 id, ::System::UInt32 skillLevel)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORAVATARSKILL_B__60_0_OFFSET))(this, id, skillLevel);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyCyreneSkillParameterModificationsForBattleEventSkill_b__61_0(::System::UInt32 id, ::System::UInt32 level)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORBATTLEEVENTSKILL_B__61_0_OFFSET))(this, id, level);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyCyreneSkillParameterModificationsForServantSkill_b__62_0(::System::UInt32 id, ::System::UInt32 skillLevel)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773___C___APPLYCYRENESKILLPARAMETERMODIFICATIONSFORSERVANTSKILL_B__62_0_OFFSET))(this, id, skillLevel);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyRankSkillParameterModificationsForBattleEventSkill_b__63_0(::System::UInt32 id, ::System::UInt32 level)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773___C___APPLYRANKSKILLPARAMETERMODIFICATIONSFORBATTLEEVENTSKILL_B__63_0_OFFSET))(this, id, level);
	}
};
