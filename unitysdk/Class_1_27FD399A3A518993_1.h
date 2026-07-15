#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1314;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_27FD399A3A518993_1_METHOD_1_673AE19004469926_OFFSET UNITYSDK_OFFSET(0x179EB140)
#define CLASS_1_27FD399A3A518993_1_METHOD_1_CFAE4A19CDCB7CB0_OFFSET UNITYSDK_OFFSET(0x179EAFE0)
#define CLASS_1_27FD399A3A518993_1__CTOR_OFFSET UNITYSDK_OFFSET(0x179EB2B0)

inline static constexpr unsigned int Class_1_27FD399A3A518993_1_TypeDefinitionIndex = 76516;

class Class_1_27FD399A3A518993_1 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1314*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1314*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1314*>*))((::PBYTE)hIl2Cpp + CLASS_1_27FD399A3A518993_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CFAE4A19CDCB7CB0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27FD399A3A518993_1_METHOD_1_CFAE4A19CDCB7CB0_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1314* Method_1_673AE19004469926(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_1314*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27FD399A3A518993_1_METHOD_1_673AE19004469926_OFFSET))(this, a1);
	}
};
