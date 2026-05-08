#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_442;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0DF8A7B9CFE99EB1_METHOD_1_13D1D23348C426A9_OFFSET UNITYSDK_OFFSET(0x13F99EB0)
#define CLASS_1_0DF8A7B9CFE99EB1_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0x13F9A090)
#define CLASS_1_0DF8A7B9CFE99EB1_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x13F9A0F0)
#define CLASS_1_0DF8A7B9CFE99EB1_METHOD_1_EBF126569FBB1ABD_OFFSET UNITYSDK_OFFSET(0x13F99F80)
#define CLASS_1_0DF8A7B9CFE99EB1__CTOR_OFFSET UNITYSDK_OFFSET(0x13F99E20)

inline static constexpr unsigned int Class_1_0DF8A7B9CFE99EB1_TypeDefinitionIndex = 71456;

class Class_1_0DF8A7B9CFE99EB1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_442*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DF8A7B9CFE99EB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_13D1D23348C426A9(::System::Int32 a1, ::Class_0_16E4307DCC419505_442* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_442*))((::PBYTE)hIl2Cpp + CLASS_1_0DF8A7B9CFE99EB1_METHOD_1_13D1D23348C426A9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EBF126569FBB1ABD(::System::Int32 a1, ::Class_0_16E4307DCC419505_442*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_442*&))((::PBYTE)hIl2Cpp + CLASS_1_0DF8A7B9CFE99EB1_METHOD_1_EBF126569FBB1ABD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0DF8A7B9CFE99EB1_METHOD_1_485502A9571E17C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DF8A7B9CFE99EB1_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}
};
