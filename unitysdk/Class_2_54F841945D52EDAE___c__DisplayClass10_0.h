#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_175B21A1A3924B03;
namespace System { class String; }

#define CLASS_2_54F841945D52EDAE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x140B8D80)
#define CLASS_2_54F841945D52EDAE___C__DISPLAYCLASS10_0___GETPARTDITHER_B__0_OFFSET UNITYSDK_OFFSET(0x140B8D90)

inline static constexpr unsigned int Class_2_54F841945D52EDAE___c__DisplayClass10_0_TypeDefinitionIndex = 54782;

class Class_2_54F841945D52EDAE___c__DisplayClass10_0 : public ::System::Object
{
public:
	::System::String* rendererName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetPartDither_b__0(::Class_1_175B21A1A3924B03* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_175B21A1A3924B03*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE___C__DISPLAYCLASS10_0___GETPARTDITHER_B__0_OFFSET))(this, a1);
	}
};
