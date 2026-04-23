#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F01FA7270E6D3948.h"

class Class_1_A4D134A7DAD941E3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_0185179BA87B71D7_METHOD_4_1E9715A48743DE76_OFFSET UNITYSDK_OFFSET(0x9A7BEE0)
#define CLASS_4_0185179BA87B71D7__CTOR_OFFSET UNITYSDK_OFFSET(0x9A7C160)
#define CLASS_4_0185179BA87B71D7__REBUILD_OFFSET UNITYSDK_OFFSET(0x9A7BFF0)
#define CLASS_4_0185179BA87B71D7___IFIXBASEPROXY__REBUILD_OFFSET UNITYSDK_OFFSET(0x9A7C170)

inline static constexpr unsigned int Class_4_0185179BA87B71D7_TypeDefinitionIndex = 57879;

class Class_4_0185179BA87B71D7 : public ::Class_3_F01FA7270E6D3948
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0185179BA87B71D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1E9715A48743DE76(::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>*))((::PBYTE)hIl2Cpp + CLASS_4_0185179BA87B71D7_METHOD_4_1E9715A48743DE76_OFFSET))(this, a1);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0185179BA87B71D7__REBUILD_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0185179BA87B71D7___IFIXBASEPROXY__REBUILD_OFFSET))(this);
	}
};
