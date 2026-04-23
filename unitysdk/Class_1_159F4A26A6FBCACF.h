#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define CLASS_1_159F4A26A6FBCACF_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x124A1450)
#define CLASS_1_159F4A26A6FBCACF__CTOR_OFFSET UNITYSDK_OFFSET(0x124A1440)

inline static constexpr unsigned int Class_1_159F4A26A6FBCACF_TypeDefinitionIndex = 65290;

class Class_1_159F4A26A6FBCACF : public ::System::Object
{
public:
	::UnityEngine::Texture2D* Field_1_3; // 0x10
	::UnityEngine::Texture2D* Field_1_4; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::System::Boolean Field_1_6; // 0x21
	::System::Single Field_1_2; // 0x24
	::System::Single Field_1_5; // 0x28
	::System::Single Field_1_1; // 0x2C
	::System::Single Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_159F4A26A6FBCACF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_159F4A26A6FBCACF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + CLASS_1_159F4A26A6FBCACF_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
