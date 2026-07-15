#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_D9413DC99216F54F;
class Class_3_92460753D1985873_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9F606CA6A04F7D7E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179D3A90)
#define CLASS_2_9F606CA6A04F7D7E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179D3B20)
#define CLASS_2_9F606CA6A04F7D7E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179D3AD0)
#define CLASS_2_9F606CA6A04F7D7E_TICK_OFFSET UNITYSDK_OFFSET(0x179D3C50)
#define CLASS_2_9F606CA6A04F7D7E__CTOR_OFFSET UNITYSDK_OFFSET(0x179D3A80)

inline static constexpr unsigned int Class_2_9F606CA6A04F7D7E_TypeDefinitionIndex = 51473;

class Class_2_9F606CA6A04F7D7E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_D9413DC99216F54F* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_92460753D1985873_1* Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_92460753D1985873_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_92460753D1985873_1*))((::PBYTE)hIl2Cpp + CLASS_2_9F606CA6A04F7D7E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F606CA6A04F7D7E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F606CA6A04F7D7E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F606CA6A04F7D7E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9F606CA6A04F7D7E_TICK_OFFSET))(this, a1);
	}
};
