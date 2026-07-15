#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class FormationMoveGroupCallback; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_CE8CCCB28AD1564F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17678ED0)
#define CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_1_OFFSET UNITYSDK_OFFSET(0x176792A0)
#define CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_OFFSET UNITYSDK_OFFSET(0x17679100)
#define CLASS_2_CE8CCCB28AD1564F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17678D70)
#define CLASS_2_CE8CCCB28AD1564F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17678E80)
#define CLASS_2_CE8CCCB28AD1564F_TICK_OFFSET UNITYSDK_OFFSET(0x17679440)
#define CLASS_2_CE8CCCB28AD1564F__CTOR_OFFSET UNITYSDK_OFFSET(0x17678C80)

inline static constexpr unsigned int Class_2_CE8CCCB28AD1564F_TypeDefinitionIndex = 55551;

class Class_2_CE8CCCB28AD1564F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::FormationMoveGroupCallback* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveGroupCallback* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveGroupCallback*))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7A6818D24D36DCBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A6818D24D36DCBD_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE8CCCB28AD1564F_TICK_OFFSET))(this, a1);
	}
};
