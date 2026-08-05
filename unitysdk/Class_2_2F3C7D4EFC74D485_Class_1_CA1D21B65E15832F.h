#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_CA1D21B65E15832F_METHOD_1_634412D8B2E4DF6D_OFFSET UNITYSDK_OFFSET(0x14FF92D0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_CA1D21B65E15832F_METHOD_1_8FEF0F372530136D_OFFSET UNITYSDK_OFFSET(0x14FF92A0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_CA1D21B65E15832F_METHOD_1_A8AD38E351B4E3BA_OFFSET UNITYSDK_OFFSET(0x14FF91C0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_CA1D21B65E15832F__CTOR_OFFSET UNITYSDK_OFFSET(0x14FF91B0)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_CA1D21B65E15832F_TypeDefinitionIndex = 43408;

class Class_2_2F3C7D4EFC74D485_Class_1_CA1D21B65E15832F : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::System::Func_2<::Class_1_BE6BF7909AD9D940*, ::System::Boolean>* Field_1_5; // 0x18
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*>* Field_1_4; // 0x20
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x28
	::System::UInt32 Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_CA1D21B65E15832F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A8AD38E351B4E3BA(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_CA1D21B65E15832F_METHOD_1_A8AD38E351B4E3BA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8FEF0F372530136D(::Class_1_BE6BF7909AD9D940* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_CA1D21B65E15832F_METHOD_1_8FEF0F372530136D_OFFSET))(this, a1);
	}

	::System::Void Method_1_634412D8B2E4DF6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_CA1D21B65E15832F_METHOD_1_634412D8B2E4DF6D_OFFSET))(this);
	}
};
