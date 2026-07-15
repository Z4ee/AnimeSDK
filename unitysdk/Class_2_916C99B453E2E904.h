#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyAddBathBuff; }
namespace System { class Object; }

#define CLASS_2_916C99B453E2E904_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1525CDF0)
#define CLASS_2_916C99B453E2E904_METHOD_2_2ED1ADFEF6244448_OFFSET UNITYSDK_OFFSET(0x1525CEB0)
#define CLASS_2_916C99B453E2E904_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1525CBD0)
#define CLASS_2_916C99B453E2E904_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1525CCE0)
#define CLASS_2_916C99B453E2E904_TICK_OFFSET UNITYSDK_OFFSET(0x1525CD90)
#define CLASS_2_916C99B453E2E904__CTOR_OFFSET UNITYSDK_OFFSET(0x1525CBC0)

inline static constexpr unsigned int Class_2_916C99B453E2E904_TypeDefinitionIndex = 50992;

class Class_2_916C99B453E2E904 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TrainPartyAddBathBuff* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyAddBathBuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyAddBathBuff*))((::PBYTE)hIl2Cpp + CLASS_2_916C99B453E2E904__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916C99B453E2E904_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916C99B453E2E904_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916C99B453E2E904_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916C99B453E2E904_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2ED1ADFEF6244448(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_916C99B453E2E904_METHOD_2_2ED1ADFEF6244448_OFFSET))(this, a1, a2);
	}
};
