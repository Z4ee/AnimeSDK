#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D89177B577188692.h"
#include "unitysdk/System/Object.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_1_C193F7C5EA6D5DB9_Class_1_89FDE32456125265;
class Class_1_C193F7C5EA6D5DB9_Class_3_B4CDC1CE1D4B231B_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C193F7C5EA6D5DB9_METHOD_1_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x187493B0)
#define CLASS_1_C193F7C5EA6D5DB9_METHOD_1_8FD55891F6967081_OFFSET UNITYSDK_OFFSET(0x18749490)
#define CLASS_1_C193F7C5EA6D5DB9_METHOD_1_CD64FADAE3A9747A_OFFSET UNITYSDK_OFFSET(0x187492D0)
#define CLASS_1_C193F7C5EA6D5DB9_METHOD_1_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0x18749090)
#define CLASS_1_C193F7C5EA6D5DB9__CTOR_OFFSET UNITYSDK_OFFSET(0x18749080)

inline static constexpr unsigned int Class_1_C193F7C5EA6D5DB9_TypeDefinitionIndex = 64966;

class Class_1_C193F7C5EA6D5DB9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C193F7C5EA6D5DB9_Class_1_89FDE32456125265*>* Field_1_0; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C193F7C5EA6D5DB9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F620DD2FD48DDF53(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C193F7C5EA6D5DB9_METHOD_1_F620DD2FD48DDF53_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD64FADAE3A9747A(::Class_1_8FBDD7D8E0EE0B49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*))((::PBYTE)hIl2Cpp + CLASS_1_C193F7C5EA6D5DB9_METHOD_1_CD64FADAE3A9747A_OFFSET))(this, a1);
	}

	::System::Void Method_1_62D75ADFFEE4BD8B(::Class_1_8FBDD7D8E0EE0B49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*))((::PBYTE)hIl2Cpp + CLASS_1_C193F7C5EA6D5DB9_METHOD_1_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FD55891F6967081(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2, ::Struct_2_D89177B577188692 a3, ::Class_1_C193F7C5EA6D5DB9_Class_3_B4CDC1CE1D4B231B_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32, ::Struct_2_D89177B577188692, ::Class_1_C193F7C5EA6D5DB9_Class_3_B4CDC1CE1D4B231B_1*))((::PBYTE)hIl2Cpp + CLASS_1_C193F7C5EA6D5DB9_METHOD_1_8FD55891F6967081_OFFSET))(this, a1, a2, a3, a4);
	}
};
