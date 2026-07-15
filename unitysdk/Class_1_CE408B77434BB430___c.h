#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE408B77434BB430;

#define CLASS_1_CE408B77434BB430___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C88A340)
#define CLASS_1_CE408B77434BB430___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C88A380)
#define CLASS_1_CE408B77434BB430___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C88A390)

inline static constexpr unsigned int Class_1_CE408B77434BB430___c_TypeDefinitionIndex = 25160;

class Class_1_CE408B77434BB430___c : public ::System::Object
{
public:
	static ::Class_1_CE408B77434BB430___c** StaticGet___9()
	{
		return (::Class_1_CE408B77434BB430___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE408B77434BB430___c_TypeDefinitionIndex)->GetStaticField(0x65570);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CE408B77434BB430___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE408B77434BB430___C__CTOR_OFFSET))(this);
	}

	::Class_1_CE408B77434BB430* __cctor_b__43_0()
	{
		return ((::Class_1_CE408B77434BB430*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE408B77434BB430___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
