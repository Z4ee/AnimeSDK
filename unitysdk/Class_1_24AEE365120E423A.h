#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_121;
namespace System { class String; }

#define CLASS_1_24AEE365120E423A_METHOD_1_D564C059DD3D8CB1_OFFSET UNITYSDK_OFFSET(0x11A55B80)
#define CLASS_1_24AEE365120E423A__CTOR_OFFSET UNITYSDK_OFFSET(0x11A55C00)

inline static constexpr unsigned int Class_1_24AEE365120E423A_TypeDefinitionIndex = 56346;

class Class_1_24AEE365120E423A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24AEE365120E423A__CTOR_OFFSET))(this);
	}

	static ::Class_1_43BD383C98B4C0C5_121* Method_1_D564C059DD3D8CB1(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_121*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24AEE365120E423A_METHOD_1_D564C059DD3D8CB1_OFFSET))(a1, a2);
	}
};
