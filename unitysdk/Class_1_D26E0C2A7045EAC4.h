#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BundleType.h"
#include "unitysdk/System/Object.h"

class Class_1_F0F5FC8CD22F7E83;
namespace System { class String; }

#define CLASS_1_D26E0C2A7045EAC4_METHOD_1_523BFA3AF717B94E_OFFSET UNITYSDK_OFFSET(0x12E29230)
#define CLASS_1_D26E0C2A7045EAC4_METHOD_1_858EE0E3CEF5E9F3_1_OFFSET UNITYSDK_OFFSET(0x12E29180)
#define CLASS_1_D26E0C2A7045EAC4_METHOD_1_858EE0E3CEF5E9F3_OFFSET UNITYSDK_OFFSET(0x12E28D90)

inline static constexpr unsigned int Class_1_D26E0C2A7045EAC4_TypeDefinitionIndex = 39338;

class Class_1_D26E0C2A7045EAC4 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_858EE0E3CEF5E9F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D26E0C2A7045EAC4_METHOD_1_858EE0E3CEF5E9F3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_858EE0E3CEF5E9F3_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D26E0C2A7045EAC4_METHOD_1_858EE0E3CEF5E9F3_1_OFFSET))(a1);
	}

	static ::Class_1_F0F5FC8CD22F7E83* Method_1_523BFA3AF717B94E(::System::String* a1, ::RPG::Client::BundleType a2)
	{
		return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::RPG::Client::BundleType))((::PBYTE)hIl2Cpp + CLASS_1_D26E0C2A7045EAC4_METHOD_1_523BFA3AF717B94E_OFFSET))(a1, a2);
	}
};
