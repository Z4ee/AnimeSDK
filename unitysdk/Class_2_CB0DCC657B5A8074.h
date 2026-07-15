#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPhotoGraphConditionResult; }
namespace System { class Object; }

#define CLASS_2_CB0DCC657B5A8074_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17325AA0)
#define CLASS_2_CB0DCC657B5A8074_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17325E10)
#define CLASS_2_CB0DCC657B5A8074_METHOD_2_F55160DB3394C58D_OFFSET UNITYSDK_OFFSET(0x173260B0)
#define CLASS_2_CB0DCC657B5A8074_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17325EF0)
#define CLASS_2_CB0DCC657B5A8074_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17325FA0)
#define CLASS_2_CB0DCC657B5A8074_TICK_OFFSET UNITYSDK_OFFSET(0x17325C90)
#define CLASS_2_CB0DCC657B5A8074__CTOR_OFFSET UNITYSDK_OFFSET(0x173259B0)

inline static constexpr unsigned int Class_2_CB0DCC657B5A8074_TypeDefinitionIndex = 51055;

class Class_2_CB0DCC657B5A8074 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::WaitPhotoGraphConditionResult* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPhotoGraphConditionResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPhotoGraphConditionResult*))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_F55160DB3394C58D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_METHOD_2_F55160DB3394C58D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
