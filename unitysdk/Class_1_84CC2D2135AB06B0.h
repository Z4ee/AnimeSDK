#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_84CC2D2135AB06B0_Class_1_7F887305F1FA7173;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_84CC2D2135AB06B0_METHOD_1_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x1D5A3B80)
#define CLASS_1_84CC2D2135AB06B0_METHOD_1_6BAE34C717407C75_OFFSET UNITYSDK_OFFSET(0x1D5A3590)
#define CLASS_1_84CC2D2135AB06B0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D5A3B40)
#define CLASS_1_84CC2D2135AB06B0_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x1D5A3720)
#define CLASS_1_84CC2D2135AB06B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A3530)

inline static constexpr unsigned int Class_1_84CC2D2135AB06B0_TypeDefinitionIndex = 8306;

class Class_1_84CC2D2135AB06B0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_84CC2D2135AB06B0_Class_1_7F887305F1FA7173*>* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84CC2D2135AB06B0__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_84CC2D2135AB06B0* Method_1_6BAE34C717407C75(::System::Int32 a1)
	{
		return ((::Class_1_84CC2D2135AB06B0*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84CC2D2135AB06B0_METHOD_1_6BAE34C717407C75_OFFSET))(a1);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84CC2D2135AB06B0_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84CC2D2135AB06B0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84CC2D2135AB06B0_METHOD_1_640514F2FC7A7607_OFFSET))(this, a1);
	}
};
