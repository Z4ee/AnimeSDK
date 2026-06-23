#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_8.h"
#include "unitysdk/Class_2_F95242C0939727AB_Struct_2_413C98E7F0821DC8_1.h"

class Class_2_1824EF69C8E376A3;
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F95242C0939727AB_METHOD_2_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x11FBAE00)
#define CLASS_2_F95242C0939727AB_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x11FBADD0)
#define CLASS_2_F95242C0939727AB_METHOD_2_C4FEB299ED39D8E9_OFFSET UNITYSDK_OFFSET(0x11FBA720)
#define CLASS_2_F95242C0939727AB_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x11FBADC0)
#define CLASS_2_F95242C0939727AB_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11FBADB0)
#define CLASS_2_F95242C0939727AB_METHOD_2_E78E03F389DBBAB7_OFFSET UNITYSDK_OFFSET(0x11FBAE10)
#define CLASS_2_F95242C0939727AB_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x11FBADE0)
#define CLASS_2_F95242C0939727AB__CTOR_OFFSET UNITYSDK_OFFSET(0x11FBA6B0)

inline static constexpr unsigned int Class_2_F95242C0939727AB_TypeDefinitionIndex = 70783;

class Class_2_F95242C0939727AB : public ::Class_1_83665B095F1535B5_8
{
public:
	::System::Collections::Generic::List_1<::Class_2_F95242C0939727AB_Struct_2_413C98E7F0821DC8_1>* Field_2_0; // 0x18
	::System::Func_5<::Class_2_1824EF69C8E376A3*, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32, ::System::Boolean>* Field_2_3; // 0x20
	::System::Int32 Field_2_2; // 0x28
	::System::Int32 Field_2_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F95242C0939727AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C4FEB299ED39D8E9(::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F95242C0939727AB_METHOD_2_C4FEB299ED39D8E9_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F95242C0939727AB_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F95242C0939727AB_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F95242C0939727AB_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F95242C0939727AB_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F95242C0939727AB_METHOD_2_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E78E03F389DBBAB7(::System::Func_5<::Class_2_1824EF69C8E376A3*, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_5<::Class_2_1824EF69C8E376A3*, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_F95242C0939727AB_METHOD_2_E78E03F389DBBAB7_OFFSET))(this, a1);
	}
};
