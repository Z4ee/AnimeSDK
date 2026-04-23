#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C89A0039A78300D4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9610330)
#define CLASS_2_C89A0039A78300D4_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x9610430)
#define CLASS_2_C89A0039A78300D4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96101E0)
#define CLASS_2_C89A0039A78300D4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x96102E0)
#define CLASS_2_C89A0039A78300D4_TICK_OFFSET UNITYSDK_OFFSET(0x96103D0)
#define CLASS_2_C89A0039A78300D4__CTOR_OFFSET UNITYSDK_OFFSET(0x96101D0)

inline static constexpr unsigned int Class_2_C89A0039A78300D4_TypeDefinitionIndex = 53664;

class Class_2_C89A0039A78300D4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskConfig* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C89A0039A78300D4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C89A0039A78300D4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C89A0039A78300D4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C89A0039A78300D4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C89A0039A78300D4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C89A0039A78300D4_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}
};
