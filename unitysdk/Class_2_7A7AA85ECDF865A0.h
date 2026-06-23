#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_42.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7A7AA85ECDF865A0_METHOD_2_82B886502AF8E904_OFFSET UNITYSDK_OFFSET(0x101139F0)
#define CLASS_2_7A7AA85ECDF865A0_METHOD_2_D5D89BA20043C0A8_OFFSET UNITYSDK_OFFSET(0x10113890)
#define CLASS_2_7A7AA85ECDF865A0_METHOD_2_ED0E789471E66B84_OFFSET UNITYSDK_OFFSET(0x10113940)
#define CLASS_2_7A7AA85ECDF865A0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x101137D0)
#define CLASS_2_7A7AA85ECDF865A0__CTOR_OFFSET UNITYSDK_OFFSET(0x10113760)

inline static constexpr unsigned int Class_2_7A7AA85ECDF865A0_TypeDefinitionIndex = 71999;

class Class_2_7A7AA85ECDF865A0 : public ::Class_1_43BD383C98B4C0C5_42
{
public:
	::Il2CppArray<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7A7AA85ECDF865A0__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_7A7AA85ECDF865A0__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D5D89BA20043C0A8(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_7A7AA85ECDF865A0_METHOD_2_D5D89BA20043C0A8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_ED0E789471E66B84(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_7A7AA85ECDF865A0_METHOD_2_ED0E789471E66B84_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_82B886502AF8E904(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7A7AA85ECDF865A0_METHOD_2_82B886502AF8E904_OFFSET))(this, a1);
	}
};
