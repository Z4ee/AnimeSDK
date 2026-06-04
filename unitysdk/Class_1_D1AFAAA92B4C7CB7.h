#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2C0A39018B2EAE4;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_006BDF3648BC7629_OFFSET UNITYSDK_OFFSET(0xC1FFF40)
#define CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_A0C572BC450E0F0C_OFFSET UNITYSDK_OFFSET(0xC1FFE80)
#define CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0xC1FFE20)
#define CLASS_1_D1AFAAA92B4C7CB7__CTOR_OFFSET UNITYSDK_OFFSET(0xC200020)

inline static constexpr unsigned int Class_1_D1AFAAA92B4C7CB7_TypeDefinitionIndex = 61249;

class Class_1_D1AFAAA92B4C7CB7 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1AFAAA92B4C7CB7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0C572BC450E0F0C(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_A0C572BC450E0F0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_006BDF3648BC7629(::Class_1_D2C0A39018B2EAE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2C0A39018B2EAE4*))((::PBYTE)hIl2Cpp + CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_006BDF3648BC7629_OFFSET))(this, a1);
	}
};
