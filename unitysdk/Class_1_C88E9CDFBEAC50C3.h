#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define CLASS_1_C88E9CDFBEAC50C3_METHOD_1_9E8C8AD58E295CA8_OFFSET UNITYSDK_OFFSET(0x14585FA0)
#define CLASS_1_C88E9CDFBEAC50C3__CTOR_OFFSET UNITYSDK_OFFSET(0x145861C0)

inline static constexpr unsigned int Class_1_C88E9CDFBEAC50C3_TypeDefinitionIndex = 62393;

class Class_1_C88E9CDFBEAC50C3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C88E9CDFBEAC50C3__CTOR_OFFSET))(this);
	}

	static ::Class_1_C88E9CDFBEAC50C3* Method_1_9E8C8AD58E295CA8(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
	{
		return ((::Class_1_C88E9CDFBEAC50C3*(*)(::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_C88E9CDFBEAC50C3_METHOD_1_9E8C8AD58E295CA8_OFFSET))(a1, a2);
	}
};
