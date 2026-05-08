#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_32BCD41779DEEDDF__CTOR_OFFSET UNITYSDK_OFFSET(0x13284910)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF_TypeDefinitionIndex = 66452;

class Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF : public ::System::Object
{
public:
	::System::Exception* Field_1_5; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::Int64 Field_1_3; // 0x30
	::System::Net::HttpStatusCode Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_32BCD41779DEEDDF__CTOR_OFFSET))(this);
	}
};
