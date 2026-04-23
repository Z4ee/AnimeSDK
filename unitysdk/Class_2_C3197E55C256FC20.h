#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_01F4079471966D8C;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class ListenPropInAnimState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_C3197E55C256FC20_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7A2210)
#define CLASS_2_C3197E55C256FC20_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7A22A0)
#define CLASS_2_C3197E55C256FC20_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7A2340)
#define CLASS_2_C3197E55C256FC20_TICK_OFFSET UNITYSDK_OFFSET(0xB7A2410)
#define CLASS_2_C3197E55C256FC20__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A2040)

inline static constexpr unsigned int Class_2_C3197E55C256FC20_TypeDefinitionIndex = 50833;

class Class_2_C3197E55C256FC20 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_01F4079471966D8C* Field_2_5; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_4; // 0x28
	::RPG::GameCore::ListenPropInAnimState* Field_2_0; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x40
	::System::Boolean Field_2_6; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ListenPropInAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ListenPropInAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_C3197E55C256FC20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3197E55C256FC20_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3197E55C256FC20_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3197E55C256FC20_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3197E55C256FC20_TICK_OFFSET))(this, a1);
	}
};
