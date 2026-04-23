#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class MonsterBehaviour; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EB93A0468C9ACCB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9708850)
#define CLASS_2_EB93A0468C9ACCB2_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9708B20)
#define CLASS_2_EB93A0468C9ACCB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97088C0)
#define CLASS_2_EB93A0468C9ACCB2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9708960)
#define CLASS_2_EB93A0468C9ACCB2_TICK_OFFSET UNITYSDK_OFFSET(0x97089E0)
#define CLASS_2_EB93A0468C9ACCB2__CTOR_OFFSET UNITYSDK_OFFSET(0x9708770)

inline static constexpr unsigned int Class_2_EB93A0468C9ACCB2_TypeDefinitionIndex = 48903;

class Class_2_EB93A0468C9ACCB2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::MonsterBehaviour* Field_2_1; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterBehaviour* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_EB93A0468C9ACCB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB93A0468C9ACCB2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB93A0468C9ACCB2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB93A0468C9ACCB2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EB93A0468C9ACCB2_TICK_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB93A0468C9ACCB2_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
