#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C2ABEAE14C6A912;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6C2BA352747E3F88_CLASS_1_3FAB92F67B4AF3DD_METHOD_1_A870D910378065FD_OFFSET UNITYSDK_OFFSET(0x13563DD0)
#define CLASS_1_6C2BA352747E3F88_CLASS_1_3FAB92F67B4AF3DD__CTOR_OFFSET UNITYSDK_OFFSET(0x13563DC0)

inline static constexpr unsigned int Class_1_6C2BA352747E3F88_Class_1_3FAB92F67B4AF3DD_TypeDefinitionIndex = 74376;

class Class_1_6C2BA352747E3F88_Class_1_3FAB92F67B4AF3DD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_9C2ABEAE14C6A912*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2BA352747E3F88_CLASS_1_3FAB92F67B4AF3DD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A870D910378065FD(::Class_1_9C2ABEAE14C6A912* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C2ABEAE14C6A912*))((::PBYTE)hIl2Cpp + CLASS_1_6C2BA352747E3F88_CLASS_1_3FAB92F67B4AF3DD_METHOD_1_A870D910378065FD_OFFSET))(this, a1);
	}
};
