#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_DA5E269DBF62B292_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x1B56A0E0)
#define CLASS_1_DA5E269DBF62B292__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56A230)

inline static constexpr unsigned int Class_1_DA5E269DBF62B292_TypeDefinitionIndex = 11277;

class Class_1_DA5E269DBF62B292 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Int16 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA5E269DBF62B292__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_DA5E269DBF62B292*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_DA5E269DBF62B292*&))((::PBYTE)hIl2Cpp + CLASS_1_DA5E269DBF62B292_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
