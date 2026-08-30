#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BlockUntilUIPageOpen; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_F2AF828AD6400D13_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BC8FC0)
#define CLASS_2_F2AF828AD6400D13_METHOD_2_94CBD0C21A609187_OFFSET UNITYSDK_OFFSET(0x17BC9270)
#define CLASS_2_F2AF828AD6400D13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17BC9080)
#define CLASS_2_F2AF828AD6400D13_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17BC9220)
#define CLASS_2_F2AF828AD6400D13_TICK_OFFSET UNITYSDK_OFFSET(0x17BC8F60)
#define CLASS_2_F2AF828AD6400D13__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC8F50)

inline static constexpr unsigned int Class_2_F2AF828AD6400D13_TypeDefinitionIndex = 58113;

class Class_2_F2AF828AD6400D13 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::BlockUntilUIPageOpen* OFKGLJOAMLD; // 0x20
	::System::UInt32 MGLEPKGFODH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockUntilUIPageOpen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockUntilUIPageOpen*))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_94CBD0C21A609187(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_METHOD_2_94CBD0C21A609187_OFFSET))(this, a1);
	}
};
