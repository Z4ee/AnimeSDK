#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_3_F23CD047B395302F;
namespace System { class String; }

#define CLASS_1_C7AC4A09F839C0D1__CTOR_OFFSET UNITYSDK_OFFSET(0x137E0F20)

inline static constexpr unsigned int Class_1_C7AC4A09F839C0D1_TypeDefinitionIndex = 85982;

class Class_1_C7AC4A09F839C0D1 : public ::System::Object
{
public:
	::Class_1_BE6BF7909AD9D940* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::UInt64 Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor(::Class_3_F23CD047B395302F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F23CD047B395302F*))((::PBYTE)hIl2Cpp + CLASS_1_C7AC4A09F839C0D1__CTOR_OFFSET))(this, a1);
	}
};
