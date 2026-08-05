#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D46C5D064952E16_4;
class Class_2_9E8CD0C1037EB98E_20;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7DF61554B1F4BCE5_CLASS_1_71DF6A7AB7CAF703_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18C421F0)
#define CLASS_1_7DF61554B1F4BCE5_CLASS_1_71DF6A7AB7CAF703_METHOD_1_84FADCB4365AB7C4_OFFSET UNITYSDK_OFFSET(0x18C42230)
#define CLASS_1_7DF61554B1F4BCE5_CLASS_1_71DF6A7AB7CAF703__CTOR_OFFSET UNITYSDK_OFFSET(0x18C41210)

inline static constexpr unsigned int Class_1_7DF61554B1F4BCE5_Class_1_71DF6A7AB7CAF703_TypeDefinitionIndex = 65084;

class Class_1_7DF61554B1F4BCE5_Class_1_71DF6A7AB7CAF703 : public ::System::Object
{
public:
	::System::Func_3<::Class_2_9E8CD0C1037EB98E_20*, ::Class_2_9E8CD0C1037EB98E_20*, ::Class_1_3D46C5D064952E16_4*>* Field_1_2; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Action_1<::Class_1_3D46C5D064952E16_4*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF61554B1F4BCE5_CLASS_1_71DF6A7AB7CAF703__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_3D46C5D064952E16_4* a1)
	{
		return ((::System::Void(*)(::Class_1_3D46C5D064952E16_4*))((::PBYTE)hIl2Cpp + CLASS_1_7DF61554B1F4BCE5_CLASS_1_71DF6A7AB7CAF703_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::Class_1_3D46C5D064952E16_4* Method_1_84FADCB4365AB7C4(::Class_2_9E8CD0C1037EB98E_20* a1, ::Class_2_9E8CD0C1037EB98E_20* a2)
	{
		return ((::Class_1_3D46C5D064952E16_4*(*)(::Class_2_9E8CD0C1037EB98E_20*, ::Class_2_9E8CD0C1037EB98E_20*))((::PBYTE)hIl2Cpp + CLASS_1_7DF61554B1F4BCE5_CLASS_1_71DF6A7AB7CAF703_METHOD_1_84FADCB4365AB7C4_OFFSET))(a1, a2);
	}
};
