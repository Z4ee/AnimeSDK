#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace System { class String; }

#define CLASS_1_34FD732BE0E1F3D4_METHOD_1_6CAF9AE313BBB275_OFFSET UNITYSDK_OFFSET(0x18311050)
#define CLASS_1_34FD732BE0E1F3D4_SET_OFFSET UNITYSDK_OFFSET(0x18311020)
#define CLASS_1_34FD732BE0E1F3D4__CTOR_OFFSET UNITYSDK_OFFSET(0x18311090)

inline static constexpr unsigned int Class_1_34FD732BE0E1F3D4_TypeDefinitionIndex = 9448;

class Class_1_34FD732BE0E1F3D4 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34FD732BE0E1F3D4__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34FD732BE0E1F3D4_SET_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_6CAF9AE313BBB275(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_34FD732BE0E1F3D4_METHOD_1_6CAF9AE313BBB275_OFFSET))(a1);
	}
};
