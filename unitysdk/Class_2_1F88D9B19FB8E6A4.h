#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchStoryLine; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1F88D9B19FB8E6A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10518360)
#define CLASS_2_1F88D9B19FB8E6A4_METHOD_2_1873E3CF907D5F2A_OFFSET UNITYSDK_OFFSET(0x105185D0)
#define CLASS_2_1F88D9B19FB8E6A4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10518730)
#define CLASS_2_1F88D9B19FB8E6A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105183A0)
#define CLASS_2_1F88D9B19FB8E6A4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10518680)
#define CLASS_2_1F88D9B19FB8E6A4_TICK_OFFSET UNITYSDK_OFFSET(0x105186D0)
#define CLASS_2_1F88D9B19FB8E6A4__CTOR_OFFSET UNITYSDK_OFFSET(0x10518350)

inline static constexpr unsigned int Class_2_1F88D9B19FB8E6A4_TypeDefinitionIndex = 44610;

class Class_2_1F88D9B19FB8E6A4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchStoryLine* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchStoryLine* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchStoryLine*))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1873E3CF907D5F2A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_METHOD_2_1873E3CF907D5F2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
