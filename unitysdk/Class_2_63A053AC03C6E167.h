#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_01F4079471966D8C;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ListenPropInAnimState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_63A053AC03C6E167_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15758A40)
#define CLASS_2_63A053AC03C6E167_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15758BA0)
#define CLASS_2_63A053AC03C6E167_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15758C40)
#define CLASS_2_63A053AC03C6E167_TICK_OFFSET UNITYSDK_OFFSET(0x15758D10)
#define CLASS_2_63A053AC03C6E167__CTOR_OFFSET UNITYSDK_OFFSET(0x15758880)

inline static constexpr unsigned int Class_2_63A053AC03C6E167_TypeDefinitionIndex = 55343;

class Class_2_63A053AC03C6E167 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* NMPLHCJKEOI; // 0x18
	::Class_2_01F4079471966D8C* ODHAMLOAKEE; // 0x20
	::RPG::GameCore::ListenPropInAnimState* OFKGLJOAMLD; // 0x28
	::Class_3_07C3C4D2990C49EE* FFKBFPKEPEN; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* HFHILHOCPNL; // 0x40
	::System::Boolean CFDILKDNDPO; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ListenPropInAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ListenPropInAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_63A053AC03C6E167__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63A053AC03C6E167_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63A053AC03C6E167_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63A053AC03C6E167_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63A053AC03C6E167_TICK_OFFSET))(this, a1);
	}
};
