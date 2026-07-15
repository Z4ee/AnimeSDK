#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C0138A0A8FBF98AC_Class_3_50D343C44D28BEFB_6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C0138A0A8FBF98AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16717DB0)
#define CLASS_1_C0138A0A8FBF98AC_METHOD_1_024B07ACC653D47E_OFFSET UNITYSDK_OFFSET(0x16717C40)
#define CLASS_1_C0138A0A8FBF98AC_METHOD_1_8B7AE99A932B2193_OFFSET UNITYSDK_OFFSET(0x167179D0)
#define CLASS_1_C0138A0A8FBF98AC_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x16717970)
#define CLASS_1_C0138A0A8FBF98AC_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x16717B50)
#define CLASS_1_C0138A0A8FBF98AC_METHOD_1_F6D03540D117E174_OFFSET UNITYSDK_OFFSET(0x16717D20)
#define CLASS_1_C0138A0A8FBF98AC__CTOR_OFFSET UNITYSDK_OFFSET(0x16717EB0)

inline static constexpr unsigned int Class_1_C0138A0A8FBF98AC_TypeDefinitionIndex = 58812;

class Class_1_C0138A0A8FBF98AC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C0138A0A8FBF98AC_Class_3_50D343C44D28BEFB_6*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0138A0A8FBF98AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C0138A0A8FBF98AC_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B7AE99A932B2193(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C0138A0A8FBF98AC_METHOD_1_8B7AE99A932B2193_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0138A0A8FBF98AC_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Void Method_1_024B07ACC653D47E(::Class_1_C0138A0A8FBF98AC_Class_3_50D343C44D28BEFB_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C0138A0A8FBF98AC_Class_3_50D343C44D28BEFB_6*))((::PBYTE)hIl2Cpp + CLASS_1_C0138A0A8FBF98AC_METHOD_1_024B07ACC653D47E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6D03540D117E174(::Class_1_C0138A0A8FBF98AC_Class_3_50D343C44D28BEFB_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C0138A0A8FBF98AC_Class_3_50D343C44D28BEFB_6*))((::PBYTE)hIl2Cpp + CLASS_1_C0138A0A8FBF98AC_METHOD_1_F6D03540D117E174_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0138A0A8FBF98AC_DISPOSE_OFFSET))(this);
	}
};
