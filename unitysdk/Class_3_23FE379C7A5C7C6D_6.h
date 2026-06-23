#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0FC8A7FDEA86D8CE.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"

namespace System { class String; }

#define CLASS_3_23FE379C7A5C7C6D_6_METHOD_3_B494DC6A3906791E_OFFSET UNITYSDK_OFFSET(0x126DE120)
#define CLASS_3_23FE379C7A5C7C6D_6__CTOR_OFFSET UNITYSDK_OFFSET(0x126DE0B0)

inline static constexpr unsigned int Class_3_23FE379C7A5C7C6D_6_TypeDefinitionIndex = 81220;

class Class_3_23FE379C7A5C7C6D_6 : public ::Class_2_0FC8A7FDEA86D8CE<::System::String*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23FE379C7A5C7C6D_6__CTOR_OFFSET))(this);
	}

	::Struct_2_E33A8767CD3B76C6 Method_3_B494DC6A3906791E(::Struct_2_174BD6D3EB04B2EE& a1)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE&))((::PBYTE)hIl2Cpp + CLASS_3_23FE379C7A5C7C6D_6_METHOD_3_B494DC6A3906791E_OFFSET))(this, a1);
	}
};
