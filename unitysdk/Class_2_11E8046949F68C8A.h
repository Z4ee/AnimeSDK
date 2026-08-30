#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitStaminaChange; }
namespace System { class Object; }

#define CLASS_2_11E8046949F68C8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A94200)
#define CLASS_2_11E8046949F68C8A_METHOD_2_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0x17A94470)
#define CLASS_2_11E8046949F68C8A_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x17A945A0)
#define CLASS_2_11E8046949F68C8A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A94360)
#define CLASS_2_11E8046949F68C8A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A94410)
#define CLASS_2_11E8046949F68C8A_TICK_OFFSET UNITYSDK_OFFSET(0x17A94520)
#define CLASS_2_11E8046949F68C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x17A94140)

inline static constexpr unsigned int Class_2_11E8046949F68C8A_TypeDefinitionIndex = 53749;

class Class_2_11E8046949F68C8A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitStaminaChange* IGHAHBNLIJA; // 0x18
	::Class_1_F3391C70DC37088D* HEAGLNNMMNJ; // 0x20
	::Class_3_07C3C4D2990C49EE* DPEKNJDLNCM; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::System::UInt32 GMBELMLEBHA; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitStaminaChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitStaminaChange*))((::PBYTE)hIl2Cpp + CLASS_2_11E8046949F68C8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11E8046949F68C8A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11E8046949F68C8A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11E8046949F68C8A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11E8046949F68C8A_TICK_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4628F59881B23161()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11E8046949F68C8A_METHOD_2_4628F59881B23161_OFFSET))(this);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_11E8046949F68C8A_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}
};
