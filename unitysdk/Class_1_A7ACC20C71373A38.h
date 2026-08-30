#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CAAE7E7C7111CC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A7ACC20C71373A38_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5C0970)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1E5C88C0)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_71FA9DF61A88645A_OFFSET UNITYSDK_OFFSET(0x1E5B8D70)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_8002A10A0271B67D_OFFSET UNITYSDK_OFFSET(0x1E5B8C60)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_E82CB811A5B25942_OFFSET UNITYSDK_OFFSET(0x1E5B90F0)
#define CLASS_1_A7ACC20C71373A38__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C0490)

inline static constexpr unsigned int Class_1_A7ACC20C71373A38_TypeDefinitionIndex = 42510;

class Class_1_A7ACC20C71373A38 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Object*>* LBHPPFMAEEI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_71FA9DF61A88645A(::Class_1_F3CAAE7E7C7111CC* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_METHOD_1_71FA9DF61A88645A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8002A10A0271B67D(::Class_1_F3CAAE7E7C7111CC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_METHOD_1_8002A10A0271B67D_OFFSET))(this, a1);
	}

	::System::Object* Method_1_E82CB811A5B25942(::Class_1_F3CAAE7E7C7111CC* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_METHOD_1_E82CB811A5B25942_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
