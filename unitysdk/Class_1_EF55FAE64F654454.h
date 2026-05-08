#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D89177B577188692.h"
#include "unitysdk/System/Object.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_1_EF55FAE64F654454_Class_1_89FDE32456125265_1;
class Class_1_EF55FAE64F654454_Class_3_B4CDC1CE1D4B231B_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF55FAE64F654454_METHOD_1_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x188AF690)
#define CLASS_1_EF55FAE64F654454_METHOD_1_CD64FADAE3A9747A_OFFSET UNITYSDK_OFFSET(0x188AF5B0)
#define CLASS_1_EF55FAE64F654454_METHOD_1_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0x188AF770)
#define CLASS_1_EF55FAE64F654454_METHOD_1_F8EA99CA6E7505F8_OFFSET UNITYSDK_OFFSET(0x188AF1E0)
#define CLASS_1_EF55FAE64F654454__CTOR_OFFSET UNITYSDK_OFFSET(0x188AF5A0)

inline static constexpr unsigned int Class_1_EF55FAE64F654454_TypeDefinitionIndex = 68343;

class Class_1_EF55FAE64F654454 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_EF55FAE64F654454_Class_1_89FDE32456125265_1*>* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF55FAE64F654454__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8EA99CA6E7505F8(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2, ::Struct_2_D89177B577188692 a3, ::Class_1_EF55FAE64F654454_Class_3_B4CDC1CE1D4B231B_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32, ::Struct_2_D89177B577188692, ::Class_1_EF55FAE64F654454_Class_3_B4CDC1CE1D4B231B_1*))((::PBYTE)hIl2Cpp + CLASS_1_EF55FAE64F654454_METHOD_1_F8EA99CA6E7505F8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CD64FADAE3A9747A(::Class_1_8FBDD7D8E0EE0B49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*))((::PBYTE)hIl2Cpp + CLASS_1_EF55FAE64F654454_METHOD_1_CD64FADAE3A9747A_OFFSET))(this, a1);
	}

	::System::Void Method_1_62D75ADFFEE4BD8B(::Class_1_8FBDD7D8E0EE0B49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*))((::PBYTE)hIl2Cpp + CLASS_1_EF55FAE64F654454_METHOD_1_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7AB99EDC5373156(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF55FAE64F654454_METHOD_1_E7AB99EDC5373156_OFFSET))(this, a1);
	}
};
