#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A17C15F7A175F4FE.h"

class Class_0_16E4307DCC419505_1255;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0C6C16B1BEC73D49_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0x159F0930)
#define CLASS_2_0C6C16B1BEC73D49_METHOD_2_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0x159F0480)
#define CLASS_2_0C6C16B1BEC73D49_METHOD_2_4307B2A4B4A12C1A_2_OFFSET UNITYSDK_OFFSET(0x159F0530)
#define CLASS_2_0C6C16B1BEC73D49_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x159F03D0)
#define CLASS_2_0C6C16B1BEC73D49_METHOD_2_49765F1E3835BA67_OFFSET UNITYSDK_OFFSET(0x159F05E0)
#define CLASS_2_0C6C16B1BEC73D49__CTOR_OFFSET UNITYSDK_OFFSET(0x159F03C0)

inline static constexpr unsigned int Class_2_0C6C16B1BEC73D49_TypeDefinitionIndex = 72421;

class Class_2_0C6C16B1BEC73D49 : public ::Class_1_A17C15F7A175F4FE
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1255*>* GFFAGJOELCH; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1255*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1255*>*))((::PBYTE)hIl2Cpp + CLASS_2_0C6C16B1BEC73D49__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C6C16B1BEC73D49_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C6C16B1BEC73D49_METHOD_2_4307B2A4B4A12C1A_1_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C6C16B1BEC73D49_METHOD_2_4307B2A4B4A12C1A_2_OFFSET))(this);
	}

	::System::Void Method_2_49765F1E3835BA67(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C6C16B1BEC73D49_METHOD_2_49765F1E3835BA67_OFFSET))(this, a1);
	}

	::System::Boolean CheckCanSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C6C16B1BEC73D49_CHECKCANSKIP_OFFSET))(this);
	}
};
