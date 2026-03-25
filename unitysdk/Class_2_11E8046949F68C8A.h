#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69FF5DE516C87A66;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitStaminaChange; }
namespace System { class Object; }

#define CLASS_2_11E8046949F68C8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DB9E60)
#define CLASS_2_11E8046949F68C8A_METHOD_2_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0x8DBA020)
#define CLASS_2_11E8046949F68C8A_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x8DBA150)
#define CLASS_2_11E8046949F68C8A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8DB9F20)
#define CLASS_2_11E8046949F68C8A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8DB9FC0)
#define CLASS_2_11E8046949F68C8A_TICK_OFFSET UNITYSDK_OFFSET(0x8DBA0D0)
#define CLASS_2_11E8046949F68C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB9DA0)

inline static constexpr unsigned int Class_2_11E8046949F68C8A_TypeDefinitionIndex = 43322;

class Class_2_11E8046949F68C8A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitStaminaChange* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x28
	::Class_1_69FF5DE516C87A66* Field_2_2; // 0x30
	::System::UInt32 Field_2_4; // 0x38

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
