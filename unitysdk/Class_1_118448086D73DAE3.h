#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BCC5174FAE21E04E;
namespace System { class Exception; }
namespace System { class TimeoutException; }
namespace System::Runtime::Serialization { class SerializationException; }

#define CLASS_1_118448086D73DAE3_METHOD_1_11F6E3760B9EA4CF_OFFSET UNITYSDK_OFFSET(0x167F7F60)
#define CLASS_1_118448086D73DAE3_METHOD_1_39FDF97D0D91C9CA_OFFSET UNITYSDK_OFFSET(0x167F7E40)
#define CLASS_1_118448086D73DAE3_METHOD_1_8CA58602AC10968E_OFFSET UNITYSDK_OFFSET(0x167F8080)
#define CLASS_1_118448086D73DAE3__CTOR_OFFSET UNITYSDK_OFFSET(0x167F81A0)

inline static constexpr unsigned int Class_1_118448086D73DAE3_TypeDefinitionIndex = 56913;

class Class_1_118448086D73DAE3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_118448086D73DAE3__CTOR_OFFSET))(this);
	}

	::Class_2_BCC5174FAE21E04E* Method_1_39FDF97D0D91C9CA(::System::Runtime::Serialization::SerializationException* a1)
	{
		return ((::Class_2_BCC5174FAE21E04E*(*)(::PVOID, ::System::Runtime::Serialization::SerializationException*))((::PBYTE)hIl2Cpp + CLASS_1_118448086D73DAE3_METHOD_1_39FDF97D0D91C9CA_OFFSET))(this, a1);
	}

	::Class_2_BCC5174FAE21E04E* Method_1_11F6E3760B9EA4CF(::System::TimeoutException* a1)
	{
		return ((::Class_2_BCC5174FAE21E04E*(*)(::PVOID, ::System::TimeoutException*))((::PBYTE)hIl2Cpp + CLASS_1_118448086D73DAE3_METHOD_1_11F6E3760B9EA4CF_OFFSET))(this, a1);
	}

	::Class_2_BCC5174FAE21E04E* Method_1_8CA58602AC10968E(::System::Exception* a1)
	{
		return ((::Class_2_BCC5174FAE21E04E*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_118448086D73DAE3_METHOD_1_8CA58602AC10968E_OFFSET))(this, a1);
	}
};
