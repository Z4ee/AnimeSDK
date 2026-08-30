#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_2A97E60807F449E7;
class Class_1_D19B260269D43396;
class Class_2_FAE6B6B726387101;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_C6F37FCBCDAC37E4_METHOD_2_1B5F8A5E739F654A_OFFSET UNITYSDK_OFFSET(0xBFD0110)
#define CLASS_2_C6F37FCBCDAC37E4_METHOD_2_4A17C0F4A08BBA38_OFFSET UNITYSDK_OFFSET(0xBFCFF00)
#define CLASS_2_C6F37FCBCDAC37E4_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xBFCF490)
#define CLASS_2_C6F37FCBCDAC37E4_METHOD_2_FB2B506081C13F6C_OFFSET UNITYSDK_OFFSET(0xBFCF4E0)
#define CLASS_2_C6F37FCBCDAC37E4__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD0310)

inline static constexpr unsigned int Class_2_C6F37FCBCDAC37E4_TypeDefinitionIndex = 71196;

class Class_2_C6F37FCBCDAC37E4 : public ::Class_1_34917908B7833130
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_FAE6B6B726387101*>* DAIGNINLNKF; // 0x60
	::Struct_2_96F8F0A04B900A9E PMECLILMEDH; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB2B506081C13F6C(::Class_1_D19B260269D43396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D19B260269D43396*))((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4_METHOD_2_FB2B506081C13F6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B5F8A5E739F654A(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4_METHOD_2_1B5F8A5E739F654A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A17C0F4A08BBA38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4_METHOD_2_4A17C0F4A08BBA38_OFFSET))(this);
	}
};
