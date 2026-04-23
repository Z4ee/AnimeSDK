#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyDestroyWorld; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E89C920BD28F162B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12964BD0)
#define CLASS_2_E89C920BD28F162B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12964AB0)
#define CLASS_2_E89C920BD28F162B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12964B80)
#define CLASS_2_E89C920BD28F162B_TICK_OFFSET UNITYSDK_OFFSET(0x12964C10)
#define CLASS_2_E89C920BD28F162B__CTOR_OFFSET UNITYSDK_OFFSET(0x12964AA0)

inline static constexpr unsigned int Class_2_E89C920BD28F162B_TypeDefinitionIndex = 53692;

class Class_2_E89C920BD28F162B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MonopolyDestroyWorld* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyDestroyWorld* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyDestroyWorld*))((::PBYTE)hIl2Cpp + CLASS_2_E89C920BD28F162B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E89C920BD28F162B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E89C920BD28F162B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E89C920BD28F162B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E89C920BD28F162B_TICK_OFFSET))(this, a1);
	}
};
