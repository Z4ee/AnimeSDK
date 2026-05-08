#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1CC572A6720DE27D_METHOD_1_6C2FA39747D9309B_OFFSET UNITYSDK_OFFSET(0x13153C20)
#define CLASS_1_1CC572A6720DE27D_METHOD_1_E33D8B19C5DC642D_OFFSET UNITYSDK_OFFSET(0x13153BE0)
#define CLASS_1_1CC572A6720DE27D_METHOD_1_F60E8A2EE8AA5F11_OFFSET UNITYSDK_OFFSET(0x13153D90)
#define CLASS_1_1CC572A6720DE27D__CTOR_OFFSET UNITYSDK_OFFSET(0x13153BD0)

inline static constexpr unsigned int Class_1_1CC572A6720DE27D_TypeDefinitionIndex = 56511;

class Class_1_1CC572A6720DE27D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC572A6720DE27D__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_E33D8B19C5DC642D(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CC572A6720DE27D_METHOD_1_E33D8B19C5DC642D_OFFSET))(a1);
	}

	static ::System::String* Method_1_6C2FA39747D9309B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CC572A6720DE27D_METHOD_1_6C2FA39747D9309B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F60E8A2EE8AA5F11(::System::Int32 a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_1CC572A6720DE27D_METHOD_1_F60E8A2EE8AA5F11_OFFSET))(a1, a2);
	}
};
