#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1D144748B0C0612C_5.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8B39EC2B87933E91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A70B10)
#define CLASS_3_8B39EC2B87933E91_METHOD_3_0DBBD9923CD66713_OFFSET UNITYSDK_OFFSET(0x11A70C20)
#define CLASS_3_8B39EC2B87933E91_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11A70AA0)
#define CLASS_3_8B39EC2B87933E91__CTOR_OFFSET UNITYSDK_OFFSET(0x11A70BA0)

inline static constexpr unsigned int Class_3_8B39EC2B87933E91_TypeDefinitionIndex = 85170;

class Class_3_8B39EC2B87933E91 : public ::Class_2_1D144748B0C0612C_5
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B39EC2B87933E91__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B39EC2B87933E91_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B39EC2B87933E91_DISPOSE_OFFSET))(this);
	}

	static ::Class_3_8B39EC2B87933E91* Method_3_0DBBD9923CD66713(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::Class_3_8B39EC2B87933E91*(*)(::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_3_8B39EC2B87933E91_METHOD_3_0DBBD9923CD66713_OFFSET))(a1, a2);
	}
};
