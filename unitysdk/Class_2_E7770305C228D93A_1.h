#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_506;

#define CLASS_2_E7770305C228D93A_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAB72930)
#define CLASS_2_E7770305C228D93A_1_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xAB72890)
#define CLASS_2_E7770305C228D93A_1_GET_PREV_OFFSET UNITYSDK_OFFSET(0xAB72870)
#define CLASS_2_E7770305C228D93A_1_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xAB728B0)
#define CLASS_2_E7770305C228D93A_1_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0xAB728D0)
#define CLASS_2_E7770305C228D93A_1_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xAB728A0)
#define CLASS_2_E7770305C228D93A_1_SET_PREV_OFFSET UNITYSDK_OFFSET(0xAB72880)
#define CLASS_2_E7770305C228D93A_1_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xAB728C0)
#define CLASS_2_E7770305C228D93A_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAB72B50)

inline static constexpr unsigned int Class_2_E7770305C228D93A_1_TypeDefinitionIndex = 52483;

class Class_2_E7770305C228D93A_1 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_506*>
{
public:
	::Class_0_16E4307DCC419505_506* _Prev_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_506* _Next_k__BackingField; // 0x30
	::System::Int32 _Priority_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7770305C228D93A_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_506* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_506*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7770305C228D93A_1_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_506* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_506*))((::PBYTE)hIl2Cpp + CLASS_2_E7770305C228D93A_1_SET_PREV_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_506* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_506*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7770305C228D93A_1_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_506* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_506*))((::PBYTE)hIl2Cpp + CLASS_2_E7770305C228D93A_1_SET_NEXT_OFFSET))(this, a1);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7770305C228D93A_1_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E7770305C228D93A_1_SET_PRIORITY_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7770305C228D93A_1_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_E7770305C228D93A_1_EXECUTE_OFFSET))(this, a1);
	}
};
