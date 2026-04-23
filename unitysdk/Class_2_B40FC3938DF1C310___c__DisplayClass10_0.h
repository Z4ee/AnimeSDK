#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_175B21A1A3924B03;
namespace System { class String; }

#define CLASS_2_B40FC3938DF1C310___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99B3220)
#define CLASS_2_B40FC3938DF1C310___C__DISPLAYCLASS10_0___GETPARTDITHER_B__0_OFFSET UNITYSDK_OFFSET(0x99B8EE0)

inline static constexpr unsigned int Class_2_B40FC3938DF1C310___c__DisplayClass10_0_TypeDefinitionIndex = 52857;

class Class_2_B40FC3938DF1C310___c__DisplayClass10_0 : public ::System::Object
{
public:
	::System::String* rendererName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetPartDither_b__0(::Class_1_175B21A1A3924B03* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_175B21A1A3924B03*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310___C__DISPLAYCLASS10_0___GETPARTDITHER_B__0_OFFSET))(this, x);
	}
};
