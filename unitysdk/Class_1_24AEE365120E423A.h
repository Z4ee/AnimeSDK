#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_118;
namespace System { class String; }

#define CLASS_1_24AEE365120E423A_METHOD_1_D564C059DD3D8CB1_OFFSET UNITYSDK_OFFSET(0xD7C3580)
#define CLASS_1_24AEE365120E423A__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C3600)

inline static constexpr unsigned int Class_1_24AEE365120E423A_TypeDefinitionIndex = 49524;

class Class_1_24AEE365120E423A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24AEE365120E423A__CTOR_OFFSET))(this);
	}

	static ::Class_1_43BD383C98B4C0C5_118* Method_1_D564C059DD3D8CB1(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_118*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24AEE365120E423A_METHOD_1_D564C059DD3D8CB1_OFFSET))(a1, a2);
	}
};
