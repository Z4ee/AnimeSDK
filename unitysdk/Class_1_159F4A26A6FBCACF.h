#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define CLASS_1_159F4A26A6FBCACF_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x1A762D00)
#define CLASS_1_159F4A26A6FBCACF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A762CF0)

inline static constexpr unsigned int Class_1_159F4A26A6FBCACF_TypeDefinitionIndex = 70765;

class Class_1_159F4A26A6FBCACF : public ::System::Object
{
public:
	::UnityEngine::Texture2D* HELJCCAOLFK; // 0x10
	::UnityEngine::Texture2D* HPEOBGNBBEO; // 0x18
	::System::Single MJPIHFICAJD; // 0x20
	::System::Boolean JMCJJIGIPJB; // 0x24
	::System::Boolean BNCOMEFNILN; // 0x25
	::System::Single BDLDENPDEHF; // 0x28
	::System::Single JNDDHADIIAD; // 0x2C
	::System::Single FCEPMFIPHJK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_159F4A26A6FBCACF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_159F4A26A6FBCACF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + CLASS_1_159F4A26A6FBCACF_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
