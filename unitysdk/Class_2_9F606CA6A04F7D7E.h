#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_D9413DC99216F54F;
class Class_3_92460753D1985873_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9F606CA6A04F7D7E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1835BE70)
#define CLASS_2_9F606CA6A04F7D7E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1835BF00)
#define CLASS_2_9F606CA6A04F7D7E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1835BEB0)
#define CLASS_2_9F606CA6A04F7D7E_TICK_OFFSET UNITYSDK_OFFSET(0x1835C030)
#define CLASS_2_9F606CA6A04F7D7E__CTOR_OFFSET UNITYSDK_OFFSET(0x1835BE60)

inline static constexpr unsigned int Class_2_9F606CA6A04F7D7E_TypeDefinitionIndex = 54157;

class Class_2_9F606CA6A04F7D7E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_92460753D1985873_1* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_1_D9413DC99216F54F* EEGKNKIBLHB; // 0x28
	::System::Int32 CCKPDMAHLNJ; // 0x30
	::System::Int32 BLHGDMABBFJ; // 0x34

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
