#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_487;

#define CLASS_2_445C1AEDEE71A815_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1238FDE0)
#define CLASS_2_445C1AEDEE71A815_1_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1238FD40)
#define CLASS_2_445C1AEDEE71A815_1_GET_PREV_OFFSET UNITYSDK_OFFSET(0x1238FD20)
#define CLASS_2_445C1AEDEE71A815_1_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1238FD60)
#define CLASS_2_445C1AEDEE71A815_1_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x1238FD80)
#define CLASS_2_445C1AEDEE71A815_1_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x1238FD50)
#define CLASS_2_445C1AEDEE71A815_1_SET_PREV_OFFSET UNITYSDK_OFFSET(0x1238FD30)
#define CLASS_2_445C1AEDEE71A815_1_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1238FD70)
#define CLASS_2_445C1AEDEE71A815_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12390000)

inline static constexpr unsigned int Class_2_445C1AEDEE71A815_1_TypeDefinitionIndex = 51809;

class Class_2_445C1AEDEE71A815_1 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_487*>
{
public:
	::Class_0_16E4307DCC419505_487* _Prev_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_487* _Next_k__BackingField; // 0x30
	::System::Int32 _Priority_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_487* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_1_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_487* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_487*))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_1_SET_PREV_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_487* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_1_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_487* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_487*))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_1_SET_NEXT_OFFSET))(this, value);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_1_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_1_SET_PRIORITY_OFFSET))(this, value);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_1_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_1_EXECUTE_OFFSET))(this, a1);
	}
};
