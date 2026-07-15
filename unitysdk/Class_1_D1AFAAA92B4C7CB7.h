#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2C0A39018B2EAE4;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_006BDF3648BC7629_OFFSET UNITYSDK_OFFSET(0x17DAD050)
#define CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_39C2002FC821E5AD_OFFSET UNITYSDK_OFFSET(0x17DACF90)
#define CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_E465D0F588233D19_OFFSET UNITYSDK_OFFSET(0x17DACF30)
#define CLASS_1_D1AFAAA92B4C7CB7__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAD130)

inline static constexpr unsigned int Class_1_D1AFAAA92B4C7CB7_TypeDefinitionIndex = 62591;

class Class_1_D1AFAAA92B4C7CB7 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1AFAAA92B4C7CB7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E465D0F588233D19(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_E465D0F588233D19_OFFSET))(this, a1);
	}

	::System::Void Method_1_39C2002FC821E5AD(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_39C2002FC821E5AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_006BDF3648BC7629(::Class_1_D2C0A39018B2EAE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2C0A39018B2EAE4*))((::PBYTE)hIl2Cpp + CLASS_1_D1AFAAA92B4C7CB7_METHOD_1_006BDF3648BC7629_OFFSET))(this, a1);
	}
};
