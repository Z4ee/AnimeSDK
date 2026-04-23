#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F95E70757E85280D;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_006BDF3648BC7629_OFFSET UNITYSDK_OFFSET(0xD9C9B50)
#define CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_A0C572BC450E0F0C_OFFSET UNITYSDK_OFFSET(0xD9C9A90)
#define CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0xD9C9A30)
#define CLASS_1_D1AFAAA92B4C7CB7__CTOR_OFFSET UNITYSDK_OFFSET(0xD9C9C30)

inline static constexpr unsigned int Class_1_D1AFAAA92B4C7CB7_TypeDefinitionIndex = 60314;

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

	::System::Void Method_1_006BDF3648BC7629(::Class_1_F95E70757E85280D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F95E70757E85280D*))((::PBYTE)hIl2Cpp + CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_006BDF3648BC7629_OFFSET))(this, a1);
	}
};
