#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterMapByCondition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2872990060E261AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA45C240)
#define CLASS_2_2872990060E261AC_METHOD_2_BAD5FEAF89CFB8BA_OFFSET UNITYSDK_OFFSET(0xA45C610)
#define CLASS_2_2872990060E261AC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA45C280)
#define CLASS_2_2872990060E261AC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA45C820)
#define CLASS_2_2872990060E261AC_TICK_OFFSET UNITYSDK_OFFSET(0xA45C870)
#define CLASS_2_2872990060E261AC__CTOR_OFFSET UNITYSDK_OFFSET(0xA45C230)

inline static constexpr unsigned int Class_2_2872990060E261AC_TypeDefinitionIndex = 42704;

class Class_2_2872990060E261AC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::EnterMapByCondition* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterMapByCondition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterMapByCondition*))((::PBYTE)hIl2Cpp + CLASS_2_2872990060E261AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2872990060E261AC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2872990060E261AC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2872990060E261AC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2872990060E261AC_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_BAD5FEAF89CFB8BA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2872990060E261AC_METHOD_2_BAD5FEAF89CFB8BA_OFFSET))(this, a1, a2, a3, a4);
	}
};
