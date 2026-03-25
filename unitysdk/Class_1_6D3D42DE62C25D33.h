#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_1_6D3D42DE62C25D33_METHOD_1_24D058ADCEE5D714_OFFSET UNITYSDK_OFFSET(0x10ABA040)
#define CLASS_1_6D3D42DE62C25D33_METHOD_1_4CDDE9017B645AE1_OFFSET UNITYSDK_OFFSET(0x10ABA110)
#define CLASS_1_6D3D42DE62C25D33_METHOD_1_8C3A2B3D0112521B_OFFSET UNITYSDK_OFFSET(0x10AB9CA0)
#define CLASS_1_6D3D42DE62C25D33_METHOD_1_93BD97C4EC18CC87_OFFSET UNITYSDK_OFFSET(0x10AB9D20)

inline static constexpr unsigned int Class_1_6D3D42DE62C25D33_TypeDefinitionIndex = 54755;

class Class_1_6D3D42DE62C25D33 : public ::System::Object
{
public:
	static ::System::Object* Method_1_8C3A2B3D0112521B(::System::Object* a1, ::System::Type* a2)
	{
		return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_6D3D42DE62C25D33_METHOD_1_8C3A2B3D0112521B_OFFSET))(a1, a2);
	}

	static ::System::Object* Method_1_93BD97C4EC18CC87(::System::String* a1, ::System::Type* a2)
	{
		return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_6D3D42DE62C25D33_METHOD_1_93BD97C4EC18CC87_OFFSET))(a1, a2);
	}

	static ::System::Type* Method_1_24D058ADCEE5D714(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_6D3D42DE62C25D33_METHOD_1_24D058ADCEE5D714_OFFSET))(a1);
	}

	static ::System::Void Method_1_4CDDE9017B645AE1(::System::Object* a1, ::System::Reflection::MemberInfo* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6D3D42DE62C25D33_METHOD_1_4CDDE9017B645AE1_OFFSET))(a1, a2, a3);
	}
};
