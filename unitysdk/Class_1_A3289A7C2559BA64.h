#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3289A7C2559BA64_DELTATIMEWITHIGNOREINDEX_OFFSET UNITYSDK_OFFSET(0x18491370)
#define CLASS_1_A3289A7C2559BA64_DELTATIME_OFFSET UNITYSDK_OFFSET(0x184912C0)
#define CLASS_1_A3289A7C2559BA64_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18491890)
#define CLASS_1_A3289A7C2559BA64_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x184911B0)
#define CLASS_1_A3289A7C2559BA64_METHOD_1_306D4FCE2EABE282_OFFSET UNITYSDK_OFFSET(0x184913F0)
#define CLASS_1_A3289A7C2559BA64_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x18491260)
#define CLASS_1_A3289A7C2559BA64__CTOR_OFFSET UNITYSDK_OFFSET(0x184911A0)

inline static constexpr unsigned int Class_1_A3289A7C2559BA64_TypeDefinitionIndex = 76403;

class Class_1_A3289A7C2559BA64 : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* EEFMDEHLLFI; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_A3289A7C2559BA64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single FixedDeltaTime(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_A3289A7C2559BA64_FIXEDDELTATIME_OFFSET))(this, a1);
	}

	::System::Single DeltaTime(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_A3289A7C2559BA64_DELTATIME_OFFSET))(this, a1);
	}

	::System::Single DeltaTimeWithIgnoreIndex(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A3289A7C2559BA64_DELTATIMEWITHIGNOREINDEX_OFFSET))(this, a1, a2, a3);
	}

	::System::Single TimeScale(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_A3289A7C2559BA64_TIMESCALE_OFFSET))(this, a1);
	}

	::System::Single Method_1_306D4FCE2EABE282(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A3289A7C2559BA64_METHOD_1_306D4FCE2EABE282_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3289A7C2559BA64_DISPOSE_OFFSET))(this);
	}
};
