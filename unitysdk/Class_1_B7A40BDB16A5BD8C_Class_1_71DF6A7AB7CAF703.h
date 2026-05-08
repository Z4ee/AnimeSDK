#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D46C5D064952E16_3;
class Class_2_9E8CD0C1037EB98E_1;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B7A40BDB16A5BD8C_CLASS_1_71DF6A7AB7CAF703_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x107A73F0)
#define CLASS_1_B7A40BDB16A5BD8C_CLASS_1_71DF6A7AB7CAF703_METHOD_1_84FADCB4365AB7C4_OFFSET UNITYSDK_OFFSET(0x107A7430)
#define CLASS_1_B7A40BDB16A5BD8C_CLASS_1_71DF6A7AB7CAF703__CTOR_OFFSET UNITYSDK_OFFSET(0x107A73E0)

inline static constexpr unsigned int Class_1_B7A40BDB16A5BD8C_Class_1_71DF6A7AB7CAF703_TypeDefinitionIndex = 42514;

class Class_1_B7A40BDB16A5BD8C_Class_1_71DF6A7AB7CAF703 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_3D46C5D064952E16_3*>* Field_1_1; // 0x10
	::System::Func_3<::Class_2_9E8CD0C1037EB98E_1*, ::Class_2_9E8CD0C1037EB98E_1*, ::Class_1_3D46C5D064952E16_3*>* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7A40BDB16A5BD8C_CLASS_1_71DF6A7AB7CAF703__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_3D46C5D064952E16_3* a1)
	{
		return ((::System::Void(*)(::Class_1_3D46C5D064952E16_3*))((::PBYTE)hIl2Cpp + CLASS_1_B7A40BDB16A5BD8C_CLASS_1_71DF6A7AB7CAF703_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::Class_1_3D46C5D064952E16_3* Method_1_84FADCB4365AB7C4(::Class_2_9E8CD0C1037EB98E_1* a1, ::Class_2_9E8CD0C1037EB98E_1* a2)
	{
		return ((::Class_1_3D46C5D064952E16_3*(*)(::Class_2_9E8CD0C1037EB98E_1*, ::Class_2_9E8CD0C1037EB98E_1*))((::PBYTE)hIl2Cpp + CLASS_1_B7A40BDB16A5BD8C_CLASS_1_71DF6A7AB7CAF703_METHOD_1_84FADCB4365AB7C4_OFFSET))(a1, a2);
	}
};
