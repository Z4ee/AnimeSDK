#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21B9871D4D474809_Class_3_50D343C44D28BEFB_6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_21B9871D4D474809_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92AB960)
#define CLASS_1_21B9871D4D474809_METHOD_1_8B7AE99A932B2193_OFFSET UNITYSDK_OFFSET(0x92AB330)
#define CLASS_1_21B9871D4D474809_METHOD_1_AC107B382B13EC97_OFFSET UNITYSDK_OFFSET(0x92AB8D0)
#define CLASS_1_21B9871D4D474809_METHOD_1_CD6E6AA876D6C959_OFFSET UNITYSDK_OFFSET(0x92AB840)
#define CLASS_1_21B9871D4D474809_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x92AB2D0)
#define CLASS_1_21B9871D4D474809_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x92AB4C0)
#define CLASS_1_21B9871D4D474809__CTOR_OFFSET UNITYSDK_OFFSET(0x92ABA50)

inline static constexpr unsigned int Class_1_21B9871D4D474809_TypeDefinitionIndex = 56766;

class Class_1_21B9871D4D474809 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_21B9871D4D474809_Class_3_50D343C44D28BEFB_6*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21B9871D4D474809__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21B9871D4D474809_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B7AE99A932B2193(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21B9871D4D474809_METHOD_1_8B7AE99A932B2193_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21B9871D4D474809_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Void Method_1_CD6E6AA876D6C959(::Class_1_21B9871D4D474809_Class_3_50D343C44D28BEFB_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21B9871D4D474809_Class_3_50D343C44D28BEFB_6*))((::PBYTE)hIl2Cpp + CLASS_1_21B9871D4D474809_METHOD_1_CD6E6AA876D6C959_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC107B382B13EC97(::Class_1_21B9871D4D474809_Class_3_50D343C44D28BEFB_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21B9871D4D474809_Class_3_50D343C44D28BEFB_6*))((::PBYTE)hIl2Cpp + CLASS_1_21B9871D4D474809_METHOD_1_AC107B382B13EC97_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21B9871D4D474809_DISPOSE_OFFSET))(this);
	}
};
