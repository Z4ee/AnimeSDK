#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

class Class_1_51E99C5C545641D8;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_0F712F61D34F4782_METHOD_1_9040A468E7F03805_OFFSET UNITYSDK_OFFSET(0xB4FF020)
#define CLASS_1_0F712F61D34F4782_METHOD_1_94F4F6C6E36506FF_OFFSET UNITYSDK_OFFSET(0xB4FEF70)
#define CLASS_1_0F712F61D34F4782_METHOD_1_9CD65259C33DB783_OFFSET UNITYSDK_OFFSET(0xB4FF120)
#define CLASS_1_0F712F61D34F4782_METHOD_1_A5890CC7418C2997_OFFSET UNITYSDK_OFFSET(0xB4FF0C0)
#define CLASS_1_0F712F61D34F4782_METHOD_1_AF46E1FF99F4CDD7_OFFSET UNITYSDK_OFFSET(0xB4FFB90)
#define CLASS_1_0F712F61D34F4782_METHOD_1_B74809605B1FE8E8_OFFSET UNITYSDK_OFFSET(0xB4FF830)
#define CLASS_1_0F712F61D34F4782_METHOD_1_BE4D4FC5E6952FBC_OFFSET UNITYSDK_OFFSET(0xB4FEED0)
#define CLASS_1_0F712F61D34F4782_METHOD_1_C1399E759168D27A_OFFSET UNITYSDK_OFFSET(0xB4FF370)
#define CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_1_OFFSET UNITYSDK_OFFSET(0xB4FF8C0)
#define CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_2_OFFSET UNITYSDK_OFFSET(0xB4FF950)
#define CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_3_OFFSET UNITYSDK_OFFSET(0xB4FF9E0)
#define CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_4_OFFSET UNITYSDK_OFFSET(0xB4FFA70)
#define CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_5_OFFSET UNITYSDK_OFFSET(0xB4FFB00)
#define CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_OFFSET UNITYSDK_OFFSET(0xB4FF7A0)
#define CLASS_1_0F712F61D34F4782_METHOD_1_EB466A894D30A2E4_OFFSET UNITYSDK_OFFSET(0xB4FF200)

inline static constexpr unsigned int Class_1_0F712F61D34F4782_TypeDefinitionIndex = 56679;

class Class_1_0F712F61D34F4782 : public ::System::Object
{
public:
	static ::RPG::GameCore::AttackDamageType Method_1_BE4D4FC5E6952FBC(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_BE4D4FC5E6952FBC_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_9040A468E7F03805(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_9040A468E7F03805_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::DamageBehaviorTemplate* Method_1_A5890CC7418C2997(::RPG::GameCore::AttackData* a1)
	{
		return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::RPG::GameCore::AttackData*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_A5890CC7418C2997_OFFSET))(a1);
	}

	static ::RPG::GameCore::DamageBehaviorTemplate* Method_1_9CD65259C33DB783(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::RPG::GameCore::JsonEnum*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_9CD65259C33DB783_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_EB466A894D30A2E4(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::String*(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_EB466A894D30A2E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_E61915281DC04B93(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B74809605B1FE8E8(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_B74809605B1FE8E8_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_E61915281DC04B93_1(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_E61915281DC04B93_2(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_2_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_E61915281DC04B93_3(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_3_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_E61915281DC04B93_4(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_4_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_E61915281DC04B93_5(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_E61915281DC04B93_5_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_AF46E1FF99F4CDD7(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_AF46E1FF99F4CDD7_OFFSET))(a1, a2);
	}

	static ::Class_1_51E99C5C545641D8* Method_1_94F4F6C6E36506FF(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_51E99C5C545641D8*(*)(::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_94F4F6C6E36506FF_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_C1399E759168D27A(::RPG::GameCore::AttackData* a1, ::Il2CppArray<::System::String*>* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::String*(*)(::RPG::GameCore::AttackData*, ::Il2CppArray<::System::String*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0F712F61D34F4782_METHOD_1_C1399E759168D27A_OFFSET))(a1, a2, a3);
	}
};
