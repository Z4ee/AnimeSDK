#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_1_D9413DC99216F54F;
class Class_3_07C3C4D2990C49EE;
class Class_3_EA28AF149A7A819C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B2AFFD10E6DFB113_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2ABBA0)
#define CLASS_2_B2AFFD10E6DFB113_METHOD_2_425BD3C9E7F102B5_OFFSET UNITYSDK_OFFSET(0xB2AC190)
#define CLASS_2_B2AFFD10E6DFB113_METHOD_2_7EA54838B888644E_OFFSET UNITYSDK_OFFSET(0xB2AC390)
#define CLASS_2_B2AFFD10E6DFB113_METHOD_2_C0BD9E87C171A9E0_OFFSET UNITYSDK_OFFSET(0xB2ABDA0)
#define CLASS_2_B2AFFD10E6DFB113_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2ABC10)
#define CLASS_2_B2AFFD10E6DFB113_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2ABFA0)
#define CLASS_2_B2AFFD10E6DFB113_TICK_OFFSET UNITYSDK_OFFSET(0xB2ABFF0)
#define CLASS_2_B2AFFD10E6DFB113__CTOR_OFFSET UNITYSDK_OFFSET(0xB2ABA80)

inline static constexpr unsigned int Class_2_B2AFFD10E6DFB113_TypeDefinitionIndex = 50359;

class Class_2_B2AFFD10E6DFB113 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_0; // 0x18
	::Class_1_D9413DC99216F54F* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::Class_3_EA28AF149A7A819C* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_5; // 0x40
	::RPG::GameCore::GameEntity* Field_2_6; // 0x48
	::RPG::GameCore::FixPoint Field_2_7; // 0x50
	::System::Int32 Field_2_8; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EA28AF149A7A819C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EA28AF149A7A819C*))((::PBYTE)hIl2Cpp + CLASS_2_B2AFFD10E6DFB113__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2AFFD10E6DFB113_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2AFFD10E6DFB113_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2AFFD10E6DFB113_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2AFFD10E6DFB113_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0BD9E87C171A9E0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B2AFFD10E6DFB113_METHOD_2_C0BD9E87C171A9E0_OFFSET))(this, a1);
	}

	::Class_1_0AD6129525BF5F86* Method_2_425BD3C9E7F102B5(::Class_1_2B8E0B4950FE44E7* a1)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_B2AFFD10E6DFB113_METHOD_2_425BD3C9E7F102B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EA54838B888644E(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_B2AFFD10E6DFB113_METHOD_2_7EA54838B888644E_OFFSET))(this, a1);
	}
};
