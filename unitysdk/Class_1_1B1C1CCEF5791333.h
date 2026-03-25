#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F19AB08624168191;
namespace System { class String; }

#define CLASS_1_1B1C1CCEF5791333_METHOD_1_953C20CDD097FB37_OFFSET UNITYSDK_OFFSET(0xCB3F230)
#define CLASS_1_1B1C1CCEF5791333__CTOR_OFFSET UNITYSDK_OFFSET(0xCB3F220)

inline static constexpr unsigned int Class_1_1B1C1CCEF5791333_TypeDefinitionIndex = 60198;

class Class_1_1B1C1CCEF5791333 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B1C1CCEF5791333__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_953C20CDD097FB37(::Class_1_F19AB08624168191* a1, ::Class_1_F19AB08624168191* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_F19AB08624168191*, ::Class_1_F19AB08624168191*))((::PBYTE)hIl2Cpp + CLASS_1_1B1C1CCEF5791333_METHOD_1_953C20CDD097FB37_OFFSET))(this, a1, a2);
	}
};
