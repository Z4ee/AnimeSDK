#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_7A66407CD5C66F37;
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26;

#define CLASS_1_5F4D64A4B97E38F9_METHOD_1_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x1D0EBAF0)
#define CLASS_1_5F4D64A4B97E38F9_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0EBA10)
#define CLASS_1_5F4D64A4B97E38F9_METHOD_1_8E6AC4E9A6FF2694_OFFSET UNITYSDK_OFFSET(0x1D0EB540)
#define CLASS_1_5F4D64A4B97E38F9_METHOD_1_A457368731BCD478_OFFSET UNITYSDK_OFFSET(0x1D0EB800)
#define CLASS_1_5F4D64A4B97E38F9_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1D0ECA70)
#define CLASS_1_5F4D64A4B97E38F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0ECBA0)

inline static constexpr unsigned int Class_1_5F4D64A4B97E38F9_TypeDefinitionIndex = 41468;

class Class_1_5F4D64A4B97E38F9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x186A0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::System::Type*>, ::Class_1_7A66407CD5C66F37<::System::Object*, ::System::Object*>*>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F4D64A4B97E38F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8E6AC4E9A6FF2694(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5F4D64A4B97E38F9_METHOD_1_8E6AC4E9A6FF2694_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F4D64A4B97E38F9_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F4D64A4B97E38F9_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Boolean Method_1_A457368731BCD478()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F4D64A4B97E38F9_METHOD_1_A457368731BCD478_OFFSET))(this);
	}

	::System::Void Method_1_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F4D64A4B97E38F9_METHOD_1_7B411317D337F87A_OFFSET))(this);
	}
};
