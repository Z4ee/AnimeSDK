#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_3E663F02593BDAF0_METHOD_1_3118D7778E198332_OFFSET UNITYSDK_OFFSET(0x19701820)
#define CLASS_1_3E663F02593BDAF0__CTOR_OFFSET UNITYSDK_OFFSET(0x197330E0)

inline static constexpr unsigned int Class_1_3E663F02593BDAF0_TypeDefinitionIndex = 36733;

class Class_1_3E663F02593BDAF0 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x10
	::System::Int32 GAGPDMNFPLC; // 0x18
	::System::Int32 DKBABENHHKN; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E663F02593BDAF0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_21AD365C113DC484* Method_1_3118D7778E198332()
	{
		return ((::Class_2_21AD365C113DC484*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E663F02593BDAF0_METHOD_1_3118D7778E198332_OFFSET))(this);
	}
};
