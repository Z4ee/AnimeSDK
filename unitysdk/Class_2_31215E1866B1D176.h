#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_413ABC1894817F1B.h"

namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_31215E1866B1D176_METHOD_2_11A2663BE22D8C49_OFFSET UNITYSDK_OFFSET(0x8FDAF90)
#define CLASS_2_31215E1866B1D176_METHOD_2_44AC7A52AAB92116_OFFSET UNITYSDK_OFFSET(0x8FDAF10)
#define CLASS_2_31215E1866B1D176_METHOD_2_50ACAD848A03DC2D_OFFSET UNITYSDK_OFFSET(0x8FDAA40)
#define CLASS_2_31215E1866B1D176_METHOD_2_8E5CE159C6F510E5_OFFSET UNITYSDK_OFFSET(0x8FDAAD0)
#define CLASS_2_31215E1866B1D176__CTOR_OFFSET UNITYSDK_OFFSET(0x8FDAF00)

inline static constexpr unsigned int Class_2_31215E1866B1D176_TypeDefinitionIndex = 64567;

class Class_2_31215E1866B1D176 : public ::Class_1_413ABC1894817F1B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31215E1866B1D176__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50ACAD848A03DC2D(::System::Collections::Generic::List_1<::System::Version*>* a1, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_2_31215E1866B1D176_METHOD_2_50ACAD848A03DC2D_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Int32>* Method_2_8E5CE159C6F510E5(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_31215E1866B1D176_METHOD_2_8E5CE159C6F510E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_44AC7A52AAB92116(::System::Collections::Generic::List_1<::System::Version*>* P0, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_2_31215E1866B1D176_METHOD_2_44AC7A52AAB92116_OFFSET))(this, P0, P1);
	}

	::Il2CppArray<::System::Int32>* Method_2_11A2663BE22D8C49(::System::Int32 P0, ::System::Int32 P1)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_31215E1866B1D176_METHOD_2_11A2663BE22D8C49_OFFSET))(this, P0, P1);
	}
};
