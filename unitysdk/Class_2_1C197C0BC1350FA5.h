#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SyncWait; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_1C197C0BC1350FA5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169DEA40)
#define CLASS_2_1C197C0BC1350FA5_METHOD_2_A5C4135A88AD533A_OFFSET UNITYSDK_OFFSET(0x169DECA0)
#define CLASS_2_1C197C0BC1350FA5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169DEA80)
#define CLASS_2_1C197C0BC1350FA5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x169DEB90)
#define CLASS_2_1C197C0BC1350FA5_TICK_OFFSET UNITYSDK_OFFSET(0x169DEC40)
#define CLASS_2_1C197C0BC1350FA5__CTOR_OFFSET UNITYSDK_OFFSET(0x169DEA30)

inline static constexpr unsigned int Class_2_1C197C0BC1350FA5_TypeDefinitionIndex = 53582;

class Class_2_1C197C0BC1350FA5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SyncWait* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncWait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncWait*))((::PBYTE)hIl2Cpp + CLASS_2_1C197C0BC1350FA5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C197C0BC1350FA5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C197C0BC1350FA5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C197C0BC1350FA5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1C197C0BC1350FA5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5C4135A88AD533A(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1C197C0BC1350FA5_METHOD_2_A5C4135A88AD533A_OFFSET))(this, a1, a2);
	}
};
