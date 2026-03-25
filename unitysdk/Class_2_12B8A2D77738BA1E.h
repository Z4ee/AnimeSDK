#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_176.h"

class Class_1_F9FBCC956DFCF137_14;
class Class_1_FD611945730E269E;
class Class_2_12B8A2D77738BA1E_Class_1_EC8B1819CA2B1A6D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_12B8A2D77738BA1E_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x104D4170)
#define CLASS_2_12B8A2D77738BA1E__CTOR_OFFSET UNITYSDK_OFFSET(0x104D4210)

inline static constexpr unsigned int Class_2_12B8A2D77738BA1E_TypeDefinitionIndex = 63225;

class Class_2_12B8A2D77738BA1E : public ::Class_1_43BD383C98B4C0C5_176
{
public:
	::System::Collections::Generic::List_1<::Class_2_12B8A2D77738BA1E_Class_1_EC8B1819CA2B1A6D*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12B8A2D77738BA1E__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_14* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*))((::PBYTE)hIl2Cpp + CLASS_2_12B8A2D77738BA1E_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
