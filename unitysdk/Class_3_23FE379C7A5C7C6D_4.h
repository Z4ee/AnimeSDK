#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A4B66A4D469141BD.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"

namespace System { class String; }

#define CLASS_3_23FE379C7A5C7C6D_4_METHOD_3_B494DC6A3906791E_OFFSET UNITYSDK_OFFSET(0x128BF0E0)
#define CLASS_3_23FE379C7A5C7C6D_4__CTOR_OFFSET UNITYSDK_OFFSET(0x128BF070)

inline static constexpr unsigned int Class_3_23FE379C7A5C7C6D_4_TypeDefinitionIndex = 63393;

class Class_3_23FE379C7A5C7C6D_4 : public ::Class_2_A4B66A4D469141BD<::System::String*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23FE379C7A5C7C6D_4__CTOR_OFFSET))(this);
	}

	::Struct_2_E33A8767CD3B76C6 Method_3_B494DC6A3906791E(::Struct_2_E147DFD2A4EE8B0B& a1)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::Struct_2_E147DFD2A4EE8B0B&))((::PBYTE)hIl2Cpp + CLASS_3_23FE379C7A5C7C6D_4_METHOD_3_B494DC6A3906791E_OFFSET))(this, a1);
	}
};
