#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMonopolyResume; }
namespace System { class Object; }

#define CLASS_2_C78265BB364A4515_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B3EDC0)
#define CLASS_2_C78265BB364A4515_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x19B3EEA0)
#define CLASS_2_C78265BB364A4515_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B3EBE0)
#define CLASS_2_C78265BB364A4515_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19B3ED40)
#define CLASS_2_C78265BB364A4515_TICK_OFFSET UNITYSDK_OFFSET(0x19B3EE40)
#define CLASS_2_C78265BB364A4515__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3EBD0)

inline static constexpr unsigned int Class_2_C78265BB364A4515_TypeDefinitionIndex = 59052;

class Class_2_C78265BB364A4515 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitMonopolyResume* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMonopolyResume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMonopolyResume*))((::PBYTE)hIl2Cpp + CLASS_2_C78265BB364A4515__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C78265BB364A4515_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C78265BB364A4515_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C78265BB364A4515_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C78265BB364A4515_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C78265BB364A4515_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
