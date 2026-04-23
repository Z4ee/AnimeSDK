#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_538E7BA66E5AEE88_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17D4CA70)
#define CLASS_1_538E7BA66E5AEE88_METHOD_1_C68E4EE621305660_OFFSET UNITYSDK_OFFSET(0x17D4E700)
#define CLASS_1_538E7BA66E5AEE88_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D4E750)
#define CLASS_1_538E7BA66E5AEE88__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4C6F0)

inline static constexpr unsigned int Class_1_538E7BA66E5AEE88_TypeDefinitionIndex = 34708;

class Class_1_538E7BA66E5AEE88 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_2; // 0x18
	::System::UInt64 Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_538E7BA66E5AEE88__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_538E7BA66E5AEE88_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_1_C68E4EE621305660(::System::UInt64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_538E7BA66E5AEE88_METHOD_1_C68E4EE621305660_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_538E7BA66E5AEE88_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
