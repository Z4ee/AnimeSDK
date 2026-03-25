#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F01FA7270E6D3948.h"

class Class_1_A4D134A7DAD941E3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_0185179BA87B71D7_METHOD_4_1E9715A48743DE76_OFFSET UNITYSDK_OFFSET(0xD19C8E0)
#define CLASS_4_0185179BA87B71D7__CTOR_OFFSET UNITYSDK_OFFSET(0xD19CB60)
#define CLASS_4_0185179BA87B71D7__REBUILD_OFFSET UNITYSDK_OFFSET(0xD19C9F0)
#define CLASS_4_0185179BA87B71D7___IFIXBASEPROXY__REBUILD_OFFSET UNITYSDK_OFFSET(0xD19CB70)

inline static constexpr unsigned int Class_4_0185179BA87B71D7_TypeDefinitionIndex = 50996;

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
