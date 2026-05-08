#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D9172C07F82DDAE_CLASS_1_0A41554DD6A05411_METHOD_1_D7203B50799C5B43_OFFSET UNITYSDK_OFFSET(0xF5F6AA0)
#define CLASS_2_9D9172C07F82DDAE_CLASS_1_0A41554DD6A05411__CTOR_OFFSET UNITYSDK_OFFSET(0xF5F6A90)

inline static constexpr unsigned int Class_2_9D9172C07F82DDAE_Class_1_0A41554DD6A05411_TypeDefinitionIndex = 51947;

class Class_2_9D9172C07F82DDAE_Class_1_0A41554DD6A05411 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_0A41554DD6A05411__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D7203B50799C5B43(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_0A41554DD6A05411_METHOD_1_D7203B50799C5B43_OFFSET))(this, a1);
	}
};
