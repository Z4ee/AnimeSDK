#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_1_60B5E5A0CB5606E4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A7ACC20C71373A38_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19DBEA20)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x19DC64F0)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_71FA9DF61A88645A_OFFSET UNITYSDK_OFFSET(0x19DB8DF0)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_938BF8B456056F0B_OFFSET UNITYSDK_OFFSET(0x19DB1C60)
#define CLASS_1_A7ACC20C71373A38__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC31B0)

inline static constexpr unsigned int Class_1_A7ACC20C71373A38_TypeDefinitionIndex = 39871;

class Class_1_A7ACC20C71373A38 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Object*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_71FA9DF61A88645A(::Class_1_60B5E5A0CB5606E4* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_METHOD_1_71FA9DF61A88645A_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_1_938BF8B456056F0B(::Class_1_60B5E5A0CB5606E4* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_METHOD_1_938BF8B456056F0B_OFFSET))(this, a1);
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
