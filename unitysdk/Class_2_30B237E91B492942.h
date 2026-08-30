#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitChimeraWorkRoundFinish; }
namespace System { class Object; }

#define CLASS_2_30B237E91B492942_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF4260D0)
#define CLASS_2_30B237E91B492942_METHOD_2_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0xF4262F0)
#define CLASS_2_30B237E91B492942_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF426150)
#define CLASS_2_30B237E91B492942_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF426210)
#define CLASS_2_30B237E91B492942_TICK_OFFSET UNITYSDK_OFFSET(0xF426290)
#define CLASS_2_30B237E91B492942__CTOR_OFFSET UNITYSDK_OFFSET(0xF4260C0)

inline static constexpr unsigned int Class_2_30B237E91B492942_TypeDefinitionIndex = 59025;

class Class_2_30B237E91B492942 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitChimeraWorkRoundFinish* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitChimeraWorkRoundFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitChimeraWorkRoundFinish*))((::PBYTE)hIl2Cpp + CLASS_2_30B237E91B492942__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30B237E91B492942_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30B237E91B492942_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30B237E91B492942_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_30B237E91B492942_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_30B237E91B492942_METHOD_2_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}
};
