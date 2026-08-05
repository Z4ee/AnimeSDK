#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5887222B9AE38D34.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_B9C3DB297BAE81C6_METHOD_1_DD0302C07D1B6E6A_OFFSET UNITYSDK_OFFSET(0x1768A4E0)
#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_B9C3DB297BAE81C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1768A4D0)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_Class_1_B9C3DB297BAE81C6_TypeDefinitionIndex = 47177;

class Class_2_6CAC28ACDD58FF63_Class_1_B9C3DB297BAE81C6 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::Struct_2_5887222B9AE38D34 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_B9C3DB297BAE81C6__CTOR_OFFSET))(this);
	}

	::System::Net::IPEndPoint* Method_1_DD0302C07D1B6E6A(::System::Net::ServicePoint* a1, ::System::Net::IPEndPoint* a2, ::System::Int32 a3)
	{
		return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_B9C3DB297BAE81C6_METHOD_1_DD0302C07D1B6E6A_OFFSET))(this, a1, a2, a3);
	}
};
