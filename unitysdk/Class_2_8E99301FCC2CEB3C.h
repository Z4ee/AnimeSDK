#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class ConfirmCheckpointRecover; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_8E99301FCC2CEB3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111A8CE0)
#define CLASS_2_8E99301FCC2CEB3C_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x111A8F20)
#define CLASS_2_8E99301FCC2CEB3C_METHOD_2_D94D446371432B5F_OFFSET UNITYSDK_OFFSET(0x111A90C0)
#define CLASS_2_8E99301FCC2CEB3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x111A8D80)
#define CLASS_2_8E99301FCC2CEB3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x111A9280)
#define CLASS_2_8E99301FCC2CEB3C_TICK_OFFSET UNITYSDK_OFFSET(0x111A8D20)
#define CLASS_2_8E99301FCC2CEB3C__CTOR_OFFSET UNITYSDK_OFFSET(0x111A8C90)

inline static constexpr unsigned int Class_2_8E99301FCC2CEB3C_TypeDefinitionIndex = 53520;

class Class_2_8E99301FCC2CEB3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ConfirmCheckpointRecover* Field_2_0; // 0x18
	::Class_1_F3391C70DC37088D* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_1_F3391C70DC37088D* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConfirmCheckpointRecover* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConfirmCheckpointRecover*))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D94D446371432B5F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_METHOD_2_D94D446371432B5F_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_ONTASKRESET_OFFSET))(this);
	}
};
