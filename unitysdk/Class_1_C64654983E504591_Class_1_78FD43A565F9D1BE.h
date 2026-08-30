#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C64654983E504591_CLASS_1_78FD43A565F9D1BE_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x189608F0)
#define CLASS_1_C64654983E504591_CLASS_1_78FD43A565F9D1BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1895FFC0)

inline static constexpr unsigned int Class_1_C64654983E504591_Class_1_78FD43A565F9D1BE_TypeDefinitionIndex = 76238;

class Class_1_C64654983E504591_Class_1_78FD43A565F9D1BE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KDNHCODKFKJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* CPPHAKMCBLI; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* KLJCLIKJGCC; // 0x20
	::System::Boolean AHMFFJBDHLL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64654983E504591_CLASS_1_78FD43A565F9D1BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64654983E504591_CLASS_1_78FD43A565F9D1BE_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}
};
