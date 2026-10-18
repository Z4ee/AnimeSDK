#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_B411A71CD55D32FD_METHOD_1_21A72E7EEEAA708C_OFFSET UNITYSDK_OFFSET(0x1EC3BC40)
#define CLASS_1_B411A71CD55D32FD_SET_OFFSET UNITYSDK_OFFSET(0x1EC3BBC0)
#define CLASS_1_B411A71CD55D32FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3BCC0)

inline static constexpr unsigned int Class_1_B411A71CD55D32FD_TypeDefinitionIndex = 35203;

class Class_1_B411A71CD55D32FD : public ::System::Object
{
public:
	::System::Boolean EEKHKKMMBHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B411A71CD55D32FD__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B411A71CD55D32FD_SET_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_21A72E7EEEAA708C(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_B411A71CD55D32FD_METHOD_1_21A72E7EEEAA708C_OFFSET))(a1);
	}
};
