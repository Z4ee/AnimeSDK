#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_EDD10E908F1C4623_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x18364330)
#define CLASS_1_EDD10E908F1C4623__CTOR_OFFSET UNITYSDK_OFFSET(0x18364450)

inline static constexpr unsigned int Class_1_EDD10E908F1C4623_TypeDefinitionIndex = 13430;

class Class_1_EDD10E908F1C4623 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDD10E908F1C4623__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_EDD10E908F1C4623*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_EDD10E908F1C4623*&))((::PBYTE)hIl2Cpp + CLASS_1_EDD10E908F1C4623_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
