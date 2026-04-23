#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class FormationMoveGroupCallback; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_CE8CCCB28AD1564F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98E8140)
#define CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_1_OFFSET UNITYSDK_OFFSET(0x98E8400)
#define CLASS_2_CE8CCCB28AD1564F_METHOD_2_7A6818D24D36DCBD_OFFSET UNITYSDK_OFFSET(0x98E8260)
#define CLASS_2_CE8CCCB28AD1564F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98E8010)
#define CLASS_2_CE8CCCB28AD1564F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x98E80F0)
#define CLASS_2_CE8CCCB28AD1564F_TICK_OFFSET UNITYSDK_OFFSET(0x98E85A0)
#define CLASS_2_CE8CCCB28AD1564F__CTOR_OFFSET UNITYSDK_OFFSET(0x98E7F20)

inline static constexpr unsigned int Class_2_CE8CCCB28AD1564F_TypeDefinitionIndex = 53615;

class Class_2_CE8CCCB28AD1564F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x20
	::RPG::GameCore::FormationMoveGroupCallback* Field_2_1; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x30

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
