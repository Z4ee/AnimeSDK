#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/GuardingState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNPCGuarding; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_0AAAEFF304725274_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177D72D0)
#define CLASS_2_0AAAEFF304725274_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x177D78C0)
#define CLASS_2_0AAAEFF304725274_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x177D8150)
#define CLASS_2_0AAAEFF304725274_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x177D77E0)
#define CLASS_2_0AAAEFF304725274_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177D7430)
#define CLASS_2_0AAAEFF304725274_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x177D8210)
#define CLASS_2_0AAAEFF304725274_TICK_OFFSET UNITYSDK_OFFSET(0x177D7D10)
#define CLASS_2_0AAAEFF304725274__CTOR_OFFSET UNITYSDK_OFFSET(0x177D6D60)

inline static constexpr unsigned int Class_2_0AAAEFF304725274_TypeDefinitionIndex = 50040;

class Class_2_0AAAEFF304725274 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::Class_2_469A56953483CA0D* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::RPG::GameCore::TransformComponent* Field_2_3; // 0x30
	::RPG::GameCore::AdventureCharacterController* Field_2_4; // 0x38
	::Class_2_F67FF7EB526BF85C* Field_2_5; // 0x40
	::Class_2_A0580152EB393340* Field_2_6; // 0x48
	::RPG::GameCore::TaskContext* Field_2_7; // 0x50
	::Class_1_5F51D4049EA87B7B* Field_2_8; // 0x58
	::RPG::GameCore::TransformComponent* Field_2_9; // 0x60
	::Class_1_5F51D4049EA87B7B* Field_2_10; // 0x68
	::RPG::GameCore::AdvNPCGuarding* Field_2_11; // 0x70
	::RPG::GameCore::NPCComponent* Field_2_12; // 0x78
	::RPG::MVector3 Field_2_13; // 0x80
	::RPG::GameCore::GuardingState Field_2_14; // 0x8C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCGuarding* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCGuarding*))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
