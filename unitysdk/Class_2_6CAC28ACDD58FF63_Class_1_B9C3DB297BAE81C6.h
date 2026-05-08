#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_B9C3DB297BAE81C6_METHOD_1_DD0302C07D1B6E6A_OFFSET UNITYSDK_OFFSET(0x107BE9D0)
#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_B9C3DB297BAE81C6__CTOR_OFFSET UNITYSDK_OFFSET(0x107BE9C0)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_Class_1_B9C3DB297BAE81C6_TypeDefinitionIndex = 60795;

class Class_2_6CAC28ACDD58FF63_Class_1_B9C3DB297BAE81C6 : public ::System::Object
{
public:
	::Struct_2_5887222B9AE38D34_2 Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_B9C3DB297BAE81C6__CTOR_OFFSET))(this);
	}

	::System::Net::IPEndPoint* Method_1_DD0302C07D1B6E6A(::System::Net::ServicePoint* a1, ::System::Net::IPEndPoint* a2, ::System::Int32 a3)
	{
		return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_B9C3DB297BAE81C6_METHOD_1_DD0302C07D1B6E6A_OFFSET))(this, a1, a2, a3);
	}
};
