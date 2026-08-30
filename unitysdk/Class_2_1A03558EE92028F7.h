#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3EE0A731EA0C8B63.h"

namespace RPG::Client { class MonoExUICamera; }

#define CLASS_2_1A03558EE92028F7_METHOD_2_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0xDD79A50)
#define CLASS_2_1A03558EE92028F7__CTOR_OFFSET UNITYSDK_OFFSET(0xDD79A40)

inline static constexpr unsigned int Class_2_1A03558EE92028F7_TypeDefinitionIndex = 72883;

class Class_2_1A03558EE92028F7 : public ::Class_1_3EE0A731EA0C8B63
{
public:
	::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + CLASS_2_1A03558EE92028F7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A03558EE92028F7_METHOD_2_DA37DFE3A5BDA9F4_OFFSET))(this);
	}
};
