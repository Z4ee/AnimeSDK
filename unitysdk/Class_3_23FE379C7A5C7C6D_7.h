#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9B0BFD94B29F3153.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"

namespace System { class String; }

#define CLASS_3_23FE379C7A5C7C6D_7_METHOD_3_B494DC6A3906791E_OFFSET UNITYSDK_OFFSET(0x123A2660)
#define CLASS_3_23FE379C7A5C7C6D_7__CTOR_OFFSET UNITYSDK_OFFSET(0x123A25F0)

inline static constexpr unsigned int Class_3_23FE379C7A5C7C6D_7_TypeDefinitionIndex = 90071;

class Class_3_23FE379C7A5C7C6D_7 : public ::Class_2_9B0BFD94B29F3153<::System::String*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23FE379C7A5C7C6D_7__CTOR_OFFSET))(this);
	}

	::Struct_2_C8DD384065D32AEE Method_3_B494DC6A3906791E(::Struct_2_174BD6D3EB04B2EE& a1)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE&))((::PBYTE)hIl2Cpp + CLASS_3_23FE379C7A5C7C6D_7_METHOD_3_B494DC6A3906791E_OFFSET))(this, a1);
	}
};
